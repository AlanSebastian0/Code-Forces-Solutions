#include <bits/stdc++.h>
using namespace std;

int main(){
    int required_bacteria;
    int count = 0;
    cin >> required_bacteria;
    while (required_bacteria > 0) {
        count += required_bacteria % 2;
        required_bacteria /= 2;
    }
    cout << count;
    return 0;
}
