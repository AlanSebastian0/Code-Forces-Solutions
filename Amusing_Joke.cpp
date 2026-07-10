#include <bits/stdc++.h>
using namespace std;
int main(){
    string hostName,guestName,jumbledLetters;
    bool is_possible;
    cin >> hostName >> guestName >> jumbledLetters;
    string totalString = hostName + guestName;
    int totalLength = totalString.size(); 
    sort(jumbledLetters.begin(),jumbledLetters.end());
    sort(totalString.begin(), totalString.end());
    if (totalLength != jumbledLetters.size()){
        is_possible = false;
    }
    else if (jumbledLetters == totalString){
        is_possible = true;
    }
    if (is_possible){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
