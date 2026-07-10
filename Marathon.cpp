#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,d;
    int count = 0;
    cin >> t;
    vector<int> answers(t);
    for (int i = 0; i < t; i++){
        cin >> a >> b >> c >> d;
        if (a < b){
            count++;
        }
        if (c > a){
            count++;
        }
        if (d > a){
            count++;
        }
        answers[i] = count;
        count = 0;
    }
    for (int di : answers){
        cout << di << endl;
    }
    return 0;
}
