#include <bits/stdc++.h>
using namespace std;

int main(){
    int students, amount_of_puzzles;
    cin >> students >> amount_of_puzzles;
   vector<int> puzzleSizes(amount_of_puzzles);
    for (int i = 0; i < amount_of_puzzles; i++){
        cin >> puzzleSizes[i];
    }
    sort(puzzleSizes.begin(), puzzleSizes.end());
    int minimum = INT_MAX;
    for (int i = 0; i + students - 1 < amount_of_puzzles; i++){
        int diff = puzzleSizes[i + students - 1] - puzzleSizes[i];
        minimum = min(minimum, diff);
    }
    cout << minimum;
    return 0;
}
