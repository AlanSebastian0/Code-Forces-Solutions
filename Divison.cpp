#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int integer;
    cin >> t;
    vector<string> ans(t);
    for (int i = 0; i < t; i++){
        cin >> integer;
        if (integer < 1400){
            ans[i] = "Division 4";
        }
        else if (integer < 1600){
            ans[i] = "Division 3";
        }
        else if (integer < 1900){
            ans[i] = "Division 2";
        }
        else {
            ans[i] = "Division 1";
        }
    }
    for (string answer : ans){
        cout << answer << endl;
    }
    return 0;
}

