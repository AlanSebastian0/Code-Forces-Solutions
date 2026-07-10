#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int taxi_number = 0;
    int groups[5] = {0};   // index 

    for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        groups[temp]++;
    }

    taxi_number += groups[4];

    int match = min(groups[3], groups[1]);
    taxi_number += match;
    groups[3] -= match;
    groups[1] -= match;

    taxi_number += groups[3];

    taxi_number += groups[2] / 2;

    groups[2] %= 2;
    if (groups[2] == 1) {
        taxi_number++;
        groups[1] = max(0, groups[1] - 2);
    }

    taxi_number += (groups[1] + 3) / 4;

    cout << taxi_number;

    return 0;
}

