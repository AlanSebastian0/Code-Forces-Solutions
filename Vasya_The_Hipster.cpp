#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b;
    cin >> a >> b;
    int mini = min(a,b); //the number of fashionable sock days is given by the colour that has the least number of socks
    int maxi = max(a,b);  
    cout << mini << " " << (maxi-mini)/2; //the number of pairs leftover is minius the fashionable socks dived by 2 to get the number of pairs and it is good that c++ does integer divison
    return 0;
}
