#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int line_count;
    cin >> line_count;
    string s;
    int x = 0;
    for (int i = 0;i < line_count; i++){
       cin >> s;
       if (s == "++X" || s == "X++"){
           x++;
       }
       else{
           x--;
       }
    }
    cout << x;
    return 0;
}
