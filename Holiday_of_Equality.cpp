#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main(){
    int n;
    int maximum = -1;
    cin >> n;
    vector<int> citizens(n);
    for (int i = 0; i < n; i++){
        cin >> citizens[i];
        maximum = max(citizens[i],maximum);
    }
    int minimum = *min_element(citizens.begin(), citizens.end());
    int total = 0;
    for (int cit : citizens){
        if (cit < maximum) total += (maximum - cit);
    }
    cout << total;
    return 0;
}
