#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    vector<int> results(t);
    for (int i = 0; i < t; i++){
        cin >> n;
        if (n <= 2){
            results[i] = 0;
            continue;
        }
        results[i] = (n-1)/2;
    }
    for (int di : results){
        cout << di << endl;
    }
    return 0;
}
