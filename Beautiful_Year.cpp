#include <iostream>
#include <string>
using namespace std;
bool is_distinct(int year);
int main(){
    int year = 0;
    cin >> year;
    year++;
    while(!is_distinct(year)){
        year++;
    }
    cout << year;
    return 0;
}
bool is_distinct(int year){ 
    string s = to_string(year);
    int length = s.size();
    for (int i = 0; i < length-1;i++){ // length - so that it doesnt now go over the limit
        for (int j = i+1; j < length;j++){
            if (s[i] == s[j]) return false;
        }
    }
    return true;
}
