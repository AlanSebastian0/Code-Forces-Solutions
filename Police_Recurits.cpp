#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    int crime_count = 0;
    cin >> n;
    int police_count = 0;
    for (int i = 0; i <n;i++){
        cin >> temp;
        if (temp == -1){
            if (police_count > 0){
                police_count--;
            }
            else{
                crime_count++;
            }
        }
        else{
            police_count += temp;
        }
    }
    cout << crime_count;
    return 0;
}
