#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) cin >> cards[i];
    int sScore = 0, dimaScore = 0;
    int left = 0;           // Pointer to the first card
    int right = n - 1;      // Pointer to the last card
    bool serejaTurn = true; // Sereja goes first
    while (left <= right) {
        int chosenValue;
        // Pick the larger of the two ends
        if (cards[left] >= cards[right]) {
            chosenValue = cards[left];
            left++; // Move the left boundary in
        } else {
            chosenValue = cards[right];
            right--; // Move the right boundary in
        }

        if (serejaTurn) {
            sScore += chosenValue;
        } else {
            dimaScore += chosenValue;
        }
        
        serejaTurn = !serejaTurn; // Switch turns
    }

    cout << sScore << " " << dimaScore << endl;
    return 0;
}
