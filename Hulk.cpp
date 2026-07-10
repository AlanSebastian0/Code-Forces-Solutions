#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string love = "I love that ", hate = "I hate that ";
    cin >> n;
    if (n == 1){
        cout << "I hate it";
        return 0; //exit
    }
    else if (n == 2){
        cout << "I hate that I love it";
        return 0;
    }
    int index = 1;  
    while (index <= n){
        if (index == n && n % 2 == 0){
            cout << "I love it";
        }
        else if (index == n && n % 2 == 1){
            cout << "I hate it";
        }
        else if (index % 2 == 1){
            cout << hate;
        }
        else if (index % 2 == 0)
            cout << love;
        index++;
    }
    return 0;
}
