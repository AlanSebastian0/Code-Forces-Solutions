#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    int results[6] = {0};
    cin >> a >> b >> c;
    results[0] = a + (b*c);
    results[1] = a * (b+c);
    results[2] = a * b * c;
    results[3] = (a+b) * c;
    results[4] = a + b + c;
    results[5] = (a*b) + c;
    int max = -1;
    for (int i = 0; i < 6; i++){
        if (results[i] > max) {
            max = results[i];
        }
    }
    cout << max;
    return 0;
}
