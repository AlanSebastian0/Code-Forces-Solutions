#include <bits/stdc++.h>
using namespace std;
bool is_in(string characters,char single);
int main(){
    string instruction;
    string characters = "QH9";
    cin >> instruction;
    for (char ch : instruction){
       if (is_in(characters,ch)){
           cout << "YES";
           return 0;
       }
    }
    cout << "NO";
    return 0;
}
bool is_in(string characters,char single){
    for (char ch : characters){
        if (ch == single){
            return true;
        }
    }
    return false;
}
