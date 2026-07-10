#include <bits/stdc++.h>
using namespace std;
void to_lower(string& s);
int main(){
    int length;
    cin >> length;
    vector<string> storage(length);
    for (int i = 0; i < length; i++){
        string temp;
        cin >> temp;
        to_lower(temp);
        if (temp == "yes"){
            storage[i] = "YES";
        }
        else
            storage[i] = "NO";
    }
    for (string ch : storage){
        cout << ch << endl;
    }
    return 0;
}
void to_lower(string& s){
    for (char& ch : s){
        ch = tolower(ch);
    }
}
