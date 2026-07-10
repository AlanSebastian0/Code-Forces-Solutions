#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,count = 0;
    string word;
    int index;
    vector<bool> character(26,false); //initlises a 26 booolean vector representing if the letters that were present
    cin >> n;
    cin >> word;
    for (char ch : word){
        char lower_ch = tolower(ch);
        index = lower_ch - 'a';
        if (!character[index]){
            character[index] = true;
            count++;
        }
    }
    if (count == 26){
        cout << "YES";
    }
    else 
        cout << "NO";
    return 0;
}
