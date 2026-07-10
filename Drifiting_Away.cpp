#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n;i++){
        cin >> s[i];
    }
    vector<int> ans;
    for (string river : s){
        for (int i = 0; i < river.size() -1;i++){
            if (river[i] != '<' && river[i+1] != '>'){
                ans.push_back(-1);
                break;
            }
        }

    }
    return 0;
}
