#include <iostream>
#include <string>
using namespace std;
bool is_in(string string1,char ch);
int main(){
    string name;
    int length = 0;
    string storage = "";
    int unique_characters = 0;
    cin >> name;
    length = name.length();
    for (char ch : name){
        if (!is_in(storage,ch)){
            storage += ch;
            unique_characters++;
        }
    }
    if (unique_characters % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
bool is_in(string string1,char ch){
    int length = 0;
    length = string1.length();
    for (int i = 0;i<length;i++){
         if (string1[i] == ch){
            return true;
         }
    }
    return false;
}

