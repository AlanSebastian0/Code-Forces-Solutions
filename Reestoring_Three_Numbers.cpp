#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<int> storage(4);
    cin >> storage[0] >> storage[1] >> storage[2] >> storage[3];
    sort(storage.begin(), storage.end());
    int a = storage[3] - storage[0];
    int b = storage[3] - storage[1];
    int c = storage[3] - storage[2];
    cout << a << " " << b << " " << c;
    return 0;
}
