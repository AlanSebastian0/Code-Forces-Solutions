#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<string> answers(t);
    for (int i = 0; i < t; i++){
        string integer;
        cin >> integer;
        string sub1 = integer.substr(0,3);
        string sub2 = integer.substr(3,3);
        int sum1 = 0, sum2 = 0;
        for (char ch : sub1){
            sum1 += ch - '0';
        }
        for (char ch : sub2){
            sum2 += ch - '0';
        }
        if (sum1 == sum2) {
            answers[i] = "YES";
        }
        else{
            answers[i] = "NO";
        }
    }
    for (string ans : answers){
        cout << ans << endl;
    }
    return 0;
}
