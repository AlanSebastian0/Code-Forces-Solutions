#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long t; // t can be up to 10^9, so long long is safer for time
    cin >> n >> t;

    vector<int> books(n);
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    int left = 0;
    long long current_time = 0;
    int max_books = 0;

    for (int right = 0; right < n; right++) {
        current_time += books[right]; // Add the new book on the right

        while (current_time > t) {
            current_time -= books[left];
            left++;
        }

        max_books = max(max_books, right - left + 1);
    }
    cout << max_books << "\n";

    return 0;
}
