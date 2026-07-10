#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    // If n is a power of 2, (n & (n - 1)) will be 0.
    if ((n & (n - 1)) == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

