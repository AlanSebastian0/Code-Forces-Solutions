#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, x;
        cin >> n >> x;
        int current;
        cin >> current;
        int difference = current;
        int forward = current;
        for (int j = 1; j < n; j++){
            cin >> forward;
            difference = max(difference, forward - current);
            current = forward;
        }
        difference = max(difference, (x - forward)*2);
        cout << difference << "\n";
    }
    return 0;
}

