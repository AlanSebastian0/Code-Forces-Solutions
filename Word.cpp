#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string word;
    cin >> word;
    int lower_count = 0,upper_count = 0;
    for (char ch: word){
        if (islower(ch)){
            lower_count++;
        }
        else
            upper_count++;
    }
    if (lower_count >= upper_count){
        for(char& ch:word){
            ch = tolower(ch);
        }
    }
    else
        for (char& ch:word) ch = toupper(ch);
    cout << word;
    return 0;
}
