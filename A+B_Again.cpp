#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    vector<int> answers(t);
    for (int i = 0; i < t;i++){
        int x;
        int sum = 0;
        cin >> x;
        sum += x % 10; //this finds that last number
        x /= 10; // this basically delets the last number by dividng it by 1;
        sum += x; //same proces this is the final digit
        answers[i] = sum;
    }
    for (int di : answers){
        cout << di << endl;
    }
    return 0;
}
