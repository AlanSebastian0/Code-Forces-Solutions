#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    bool right = true;
    cin >> n >> m;
    for (int i = 1; i <= n;i++){
        if (i % 2 == 1){
            for (int i = 0; i < m; i++){
                cout << "#";
            }
            cout << endl;
        }
        else{
            if (right == true){
                cout << ".";
            }
            else
                cout << "#";
            for (int j = 1; j<m-1;j++){
                cout << ".";
            }
            if (right){
                cout << "#" << endl;
                right = false;
            }
            else{
                cout << "." << endl;
                right = true;
            }
        }
    }
}
