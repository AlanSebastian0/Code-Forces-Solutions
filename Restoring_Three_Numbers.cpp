#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> storage(4);
    for (int i = 0; i < 4; i++) cin >> storage[i];
    sort(storage.begin(), storage.end());
    int d = storage[3];
    int a  = storage[0] - d;
    int b = storage[1] - d;
    int c = storage[2] - d;
    cout << a*-1 << " " << b*-1 << " " << c*-1;
    return 0;
}
