#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> nums(3);
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> nums[j];
        }
        sort(nums.begin(), nums.end());
        if (nums[1] + nums[2] >= 10) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
