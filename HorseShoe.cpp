#include <iostream>
#include <vector>
using namespace std;
bool is_in(const vector<int>& input_array,int number);
int main(){
    int n,input_number;
    int count = 0;
    vector<int> input_array(4);
    vector<int> seen(4);
    int input_array_count = 0;
    cin >> input_array[0] >> input_array[1] >> input_array[2] >> input_array[3];
    for (int digit : input_array){
        if (!is_in(seen,digit)){
            seen.push_back(digit);
        }
        else
            count++;
    }
    cout << count;
    return 0;
}
bool is_in(const vector<int>& input_array,int number){
    if (input_array.size() == 0) return false;
    for (int digit : input_array){
        if (digit == number){
            return true;
        }
    } 
    return false;
}

