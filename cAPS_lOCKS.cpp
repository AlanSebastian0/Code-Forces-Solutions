#include <bits/stdc++.h>
using namespace std;
bool is_all_upper(string& s);
int main(){
    string s;
    bool is_caps = false;
    string new_s;
    cin >> s;
    int length = s.size();
    if (is_all_upper(s)){
        is_caps = true;
    }
    else if (length > 0 && islower(s[0])){
        new_s = s.substr(1,length-1);
        if(is_all_upper(new_s)){
            is_caps = true;
        }
    }
    if (is_caps){
        for (char& ch : s){
            if (isupper(ch)){
                ch = tolower(ch);
            }
            else
                ch =toupper(ch);
        }
    }
    cout << s;
    return 0;
}
bool is_all_upper(string& s){
    for (char ch : s) {
        if (islower(ch)){
            return false;
        }
    }
    return true;
}
