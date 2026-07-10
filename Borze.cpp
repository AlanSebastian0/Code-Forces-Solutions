#include <bits/stdc++.h>
using namespace std;

int main(){
    string input;
    vector<int> ans;
    cin >> input;
    for (int i = 0; i < input.size(); i++){
        if (input[i] == '.'){
            ans.push_back(0);
        }
        else if (input[i] == '-' && input[i+1] == '.'){
            ans.push_back(1);
            i++;
        }
        else if (input[i] == '-' && input[i+1] == '-'){
            ans.push_back(2);
            i++;
        }
    }
    for (int di : ans){
        cout << di;
    }
    return 0;
}
