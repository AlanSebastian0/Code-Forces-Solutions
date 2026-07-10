#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, r;
    int shovels;
    cin >> k >> r;
    if (k % 10 ==0){ //only one shovel is required if it is a multiple of 10
        cout << 1;
        return 0;
    }
    for (int i = 1; i <= 1e10; i++){
        if ((k*i) % 10 == r or (k*i) % 10 == 0){
            cout << i;
            return 0;
        }
    }
    return 0;
}
