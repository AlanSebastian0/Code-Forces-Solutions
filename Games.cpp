#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> home(n), away(n);
    for (int i = 0; i < n; i++){
        cin >> home[i] >> away[i];
    }
    int conflicts = 0;
    // For each team i as host
    for (int i = 0; i < n; i++){
        // Check all potential guests j
        for (int j = 0; j < n; j++){
            if (i != j && away[j] == home[i]){
                conflicts++;
            }
        }
    }
    cout << conflicts << endl;
    return 0;
}
