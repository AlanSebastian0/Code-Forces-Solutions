#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sort(vector<int>& array);
int main(){
    string equation;
    cin >> equation;
    vector<int> numbers;
    int temp = 0;
    int length = equation.length();
    for (int i = 0; i < length; i +=2){
        numbers.push_back((int)equation[i] - (int)'0');
    }
    sort(numbers);
    for (int i = 0 ; i < numbers.size();i++){
        cout << numbers[i];
        if (i!=numbers.size() - 1){
            cout << '+';
        }
    }
    return 0;
}
void sort(vector<int>& array){
    int length = array.size();
    for (int i=1;i < length;i++){
        int j = i;
        while (j >0 && array[j-1] > array[j]){
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            j--;
        }
    }
}
