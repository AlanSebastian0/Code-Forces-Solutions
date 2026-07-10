#include <bits/stdc++.h>
using namespace std;
long long highest_point_number(const vector<int>& sequence);
int main(){
    int length;
    int point_count = 0;
    cin >> length;
    vector<int> sequence(length);
    for (int i = 0; i < length; i++){
        cin >> sequence[i];
    }
    long long point_number = highest_point_number(sequence);
    cout << point_number;
    return 0;
}
long long highest_point_number(const vector<int>& sequence){
    long long count = 0;
    int storage = 0;
    long long highest = 0;
    for (int chose_number: sequence){
        for (int di : sequence){
            if (di == chose_number){
                count += chose_number;
            }
            else if (di != chose_number - 1 && di != chose_number+1){
                count += di;
            }
        }
        if (count > highest){
            highest = count;
            storage = chose_number;
        }
        count = 0; //after each loop make count equal 0.
    }
    return highest;
}
