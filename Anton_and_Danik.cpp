#include <iostream>
#include <string>
using namespace std;

int main(){
    int no_games = 0,A_count = 0, B_count = 0;
    string s;
    cin >> no_games;
    cin >> s;
    for (char ch : s){
        if (ch == 'A'){
            A_count++;
        }
        else
            B_count++;
    }
    if (A_count > B_count)
        cout << "Anton";
    else if (B_count > A_count)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}
