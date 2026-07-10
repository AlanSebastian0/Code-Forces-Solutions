#include <iostream>
#include <string>
using namespace std;
bool is_lucky(string lucky_count);
int main(){
    string number;
    int lucky_count = 0;
    cin >> number;
    for (char digit : number){
        if (digit == '7' || digit == '4') lucky_count++;
    }
    string lucky_count_string = to_string(lucky_count); //converst the amount of lucky times to a string to check if that is a lucky number
    cout << (is_lucky(lucky_count_string) ? "YES": "NO");
    return 0;
}
bool is_lucky(string lucky_count){
    int count = 0;
    for (char ch : lucky_count){
        if (ch == '4' || ch == '7'){
            count++;
        }
    } 
    return (count == lucky_count.size());
}
