#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int moves = 0;
    vector<int> answers(t);
    for (int i = 0; i < t; i++){
        int a,b;
        cin >> a >> b;
        int diff = abs(a-b);
        moves = (diff + 9) / 10;
        answers[i] = moves;
    }
    for (int di : answers){
        cout << di << endl;
    }
    return 0;
}
