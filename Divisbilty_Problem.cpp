#include <bits/stdc++.h>
using namespace std;

int main(){
    int t = 0;
    vector<int> results;
    cin >> t;
    int number,divisor,reminder;
    for (int i = 0; i < t;i++){
        cin >> number >> divisor;
        reminder = number % divisor;
        if (reminder == 0){
            results.push_back(0);
        }
        else
            results.push_back((divisor - reminder)) ;
    }
    for (int digit : results){
        cout << digit << endl;
    }
    return 0;
}
