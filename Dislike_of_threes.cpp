#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> storage(1000);
    int iter = 0;
    for (int i = 0; i < 1000 || (iter < 1000);i++){
        if ((i % 10) != 3 && (i % 3) != 0){
            storage[iter] = i;
            iter++;
        }
    }
    int t;
    int k;
    cin >> t;
    vector<int> ans;
    for (int i = 0; i < t; i++){
        cin >> k;
        ans.push_back(storage[k-1]);
    }
    for (int di  : ans){
        cout << di << endl;
    }
    return 0;
}
