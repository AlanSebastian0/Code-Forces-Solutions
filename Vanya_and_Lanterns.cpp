#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,length_street;
    int variable;
    cin >> n >> length_street;
    vector<int> lanterns(n,0);
    for (int i = 0; i < n; i++){
        cin >> lanterns[i];
    }
    sort(lanterns.begin(),lanterns.end());
    float max_difference = 0, difference;
    for (int i = 1; i < n;i++){
        difference = lanterns[i] - lanterns[i-1];
        if (difference  > max_difference)
            max_difference = difference;
    }
    max_difference /= 2; 
    double begin_difference = lanterns[0];
    double last_difference = length_street - lanterns[n-1];
    double ans = max({(double)max_difference,(double)begin_difference,(double)last_difference});
    cout << fixed << setprecision(10) << ans;

    return 0;
}
