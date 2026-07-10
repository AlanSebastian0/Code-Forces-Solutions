#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a,b,c;
    cin >> t;
    vector<char> answers(t);
    for (int i = 0; i < t; i++){
        cin >> a >> b >> c;
        if ((a+b) == c){
            answers[i] = '+';
        }
        else {
            answers[i] = '-';
        }
    }
    for (char ch : answers){
        cout << ch << endl;
    }
    return 0;
}
