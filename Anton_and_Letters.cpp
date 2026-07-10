#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    set<char> unique_characters;
    getline(cin,s);
    for (int i = 1; i < s.size(); i += 3){
        if (s[i] >= 'a' && s[i] <= 'z') { // This makes sure to skip the {} braces
            unique_characters.insert(s[i]);
    }
    }
    cout << unique_characters.size();
    return 0;
}
