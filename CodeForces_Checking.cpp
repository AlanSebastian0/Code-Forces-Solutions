#include <bits/stdc++.h>
using namespace std;

int main(){
    string test = "codeforces";
    int t;
    cin >> t;
    vector<string> answers(t,"NO");
    char character;
    for (int i = 0; i < t; i++){
        cin >> character;
        for (char ch : test){
            if (ch == character){
                answers[i] = "YES";
                break;
            }
        }
    }
    for (string ans : answers) cout << ans << endl;
    return 0;
}
