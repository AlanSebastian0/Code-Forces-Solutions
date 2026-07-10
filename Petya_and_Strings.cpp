#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string string1;
    string string2;
    cin >> string1 >> string2;
    int value1 = 0, value2 = 0;
    for (char& c : string1){
        c = tolower(c);
        value1 += (int)c;
    }
    for (char&c : string2){ // converting both strings to lower case
        c = tolower(c);
        value2 += (int)c;
    }
    if (value2 < value1){
        cout << 1;
    }
    else if (value2 > value1){
        cout << -1;
    }
    else{
        cout << 0;
    }
    return 0;
}
