#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans(t);
    for (int i = 0; i < t; i++){
        vector<int> storage(3);
        map<int, int> mp;
        cin >> storage[0] >> storage[1] >> storage[2];
        for (int di : storage){
            mp[di]++;
        }
        for (auto pair : mp){
            if (pair.second == 1){
                ans[i] = pair.first;
            } 
        }
    }
    for (int answer : ans){
        cout << answer << endl;
    }
    return 0;
}
