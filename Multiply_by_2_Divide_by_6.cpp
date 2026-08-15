#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> ans(t);
    int num = 0;

    for (int i = 0; i < t; i++) {
        cin >> num;
        int count2 = 0;
        int count3 = 0;
        // Count prime factors of 2
        while (num % 2 == 0) {
            num /= 2;
            count2++;
        }
        // Count prime factors of 3
        while (num % 3 == 0) {
            num /= 3;
            count3++;
        }

        if (num != 1) {
            ans[i] = -1;
        }
        // You cannot have more 2s than 3s
        else if (count3 < count2) {
            ans[i] = -1;
        }
        else {
            ans[i] = 2 * count3 - count2;
        }
    }
    for (int answer : ans) {
        cout << answer << endl;
    }

    return 0;
}

