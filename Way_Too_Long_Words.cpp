#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> s2;
    int word_count;
    string s;
    cin >> word_count;
    for (int i = 0; i < word_count; i++){
        cin >> s;
        if (s.length() <= 10){
            s2.push_back(s);
        }
        else {
            s2.push_back(string(1,s.front()) + to_string(s.length() - 2) + string(1,s.back())); 
        }
    }
    for (int i = 0;i < s2.size(); i++){
        cout << s2[i] << endl;
    }
}
