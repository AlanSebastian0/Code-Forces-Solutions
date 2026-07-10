#include <bits/stdc++.h>
using namespace std;
int index_find(const vector<int>& storage,int value);
int main(){
    int t;
    cin >> t;
    vector<int> answers(t);
    map<int,int> mp;
    for (int i = 0; i < t;i++){
        mp.clear();
        int n;
        cin >> n;
        vector<int> storage(n);
        for (int j = 0; j < n; j++){
            cin >> storage[j];
            mp[storage[j]]++;
        }
        int number = 0;
        for (auto& pair : mp){
            if (pair.second == 1){
                number = pair.first;
            }
        }
        answers[i] = index_find(storage,number);
    }
    for (int di : answers) cout << di+1 << endl;
}
int index_find(const vector<int>& storage,int value){
    for(int i = 0; i < storage.size(); i++){
        if (storage[i] == value){
            return i;
        }
    }
}
