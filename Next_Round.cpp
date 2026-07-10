#include <vector>
#include <iostream>

using namespace std;

int main() {
    int participants, place;
    cin >> participants >> place;

    vector<int> scores(participants);
    for (int i = 0; i < participants; i++) {
        cin >> scores[i];
    }

    int threshold_score = scores[place - 1]; // Score of the k-th person
    int pass_count = 0;

    for (int i = 0; i < participants; i++) {
        // Everyone must have a score >= threshold AND > 0
        if (scores[i] >= threshold_score && scores[i] > 0) {
            pass_count++;
        }
    }

    cout << pass_count << endl;
    return 0;
}

