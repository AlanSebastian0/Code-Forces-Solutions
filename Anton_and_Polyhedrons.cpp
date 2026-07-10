#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    vector<string> s(n);
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    for (string hedron : s){
        if (hedron == "Tetrahedron"){
            sum += 4;
        }
        else if (hedron == "Cube"){
            sum += 6;
        }
        else if (hedron == "Octahedron"){
            sum += 8;
        }
        else if (hedron == "Dodecahedron"){
            sum += 12;
        }
        else
            sum += 20;
    }
    cout << sum;
    return 0;
}
