#include <iostream>
#include <string>
using namespace std;

int main(){
    string sum;
    string num1,num2;
    cin >> num1 >> num2;
    for (int i =0; i < num1.size();i++){
        if (num1[i] != num2[i]){
            sum.append("1");
        }
        else
            sum.append("0");
    }
    cout << sum;
}
