#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    vector<string> results;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if (a == b + c || b == a + c || c == a + b){
            results.push_back("YES");
        }
        else{
            results.push_back("No");
        }
    }
    for (string& word : results){
        cout << word << endl;
    }
    return 0;
}
