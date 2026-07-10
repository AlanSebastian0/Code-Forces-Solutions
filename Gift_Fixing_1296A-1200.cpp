#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,counter = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    for (int i = 0; i < n;i++){
        counter += abs(a[i] - b[i]);
    }
    cout << counter;
    return 0;
}
