#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    int integer = 0;
    cin >> n;
    vector<string> answer(n);
    while (n){
        cin >> integer;
        if (integer % 3 == 0){
            answer.push_back("Second");
        }
        else{
            answer.push_back("First");
        }
        n--;
    }
    for (string ans : answer){
        cout << ans << endl;
    }
}

