#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool is_in(string word,char character);
int main(){
    string word;
    string new_word;
    cin >> word;
    string vowels = "AOYEUIaoyeui";
    int length = word.size();
    for (char ch : word){
        if (is_in(vowels,ch)){
            int jaurna = 1;
        }
        else{
            new_word.push_back('.');
            new_word.push_back(tolower(ch));
        }
    }
    cout << new_word;
    return 0;
}
bool is_in(string word,char character){
    for (char ch : word){
        if (ch == character){
            return true;
        }
    }
    return false;
}
