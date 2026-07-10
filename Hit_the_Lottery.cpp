#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count = 0;
    cin >> n;
    int divisors[] = {100,20,10,5};
    for (int i = 0; i < 4; i++){
        count += n / divisors[i];
        n %= divisors[i];
    }
    cout << count + n;
    return 0;
}
