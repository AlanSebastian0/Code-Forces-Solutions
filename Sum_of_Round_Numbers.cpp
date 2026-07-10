#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string number;
        cin >> number;
        int length = number.size();
        int number_of_sums = 0;
        vector<string> result;
        for (int i = 0; i < length; i++){
            if (number[i] != '0'){
                number_of_sums++;
                string new_number(1, number[i]);
                for (int j = 0; j < length - i - 1; j++){
                    new_number += '0';
                }
                result.push_back(new_number);
            }
        }
        cout << number_of_sums << "\n";
        for (auto &x : result)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}

