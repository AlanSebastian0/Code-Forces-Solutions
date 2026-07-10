#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string t;
    bool same = true; //asume it is true unless proven
    cin >> s;
    cin >> t;
    int s_length = s.size();
    if (s_length != t.size()){
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < s_length;i++){
        if (s[i] != t[s_length-1-i]) { // Two pointer method length - 1 for 0 based index and -i to start from end to middle
            same = false;
            break;
        }
    }
    cout << ((same) ? "YES" : "NO" );
    return 0;
}
