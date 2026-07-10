#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> even_indices, odd_indices;
    for (int i = 1; i <= n; i++){
        int num;
        cin >> num;
        if (num % 2 == 0){
            even_indices.push_back(i);
        } else {
            odd_indices.push_back(i);
        }
    }
    if (even_indices.size() == 1){
        cout << even_indices[0] << endl;
    } else {
        cout << odd_indices[0] << endl;
    }
    return 0;
}
