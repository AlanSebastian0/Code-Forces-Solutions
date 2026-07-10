#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> answers(t);
    vector<int> storage(3);
    for (int i = 0; i < t; i++){
        cin >> storage[0] >> storage[1] >> storage[2];
        sort(storage.begin(),storage.end());
        answers[i] = storage[1];
    }
    for (int di : answers) cout << di << endl;
    return 0;
}
