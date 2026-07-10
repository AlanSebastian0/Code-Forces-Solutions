#include <bits/stdc++.h>
using namespace std;


int main(){
    int damage[4] = {0};
    int damage_count = 0, dragon_count;
    cin >> damage[0] >> damage[1] >> damage[2] >> damage[3];
    cin >> dragon_count;
    for (int i = 1; i <= dragon_count;i++){
        for (int j = 0; j < 4; j++){
            if (i % damage[j] == 0){
                damage_count++;
                break;
            }
        }
    }
    cout << damage_count;
    return 0;
}
