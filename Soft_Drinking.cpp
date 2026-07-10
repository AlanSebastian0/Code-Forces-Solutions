#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalMl = (k * l) / nl;
    int totalSlices = c * d;
    int enoughSalt = p / np;
    int total = min({totalMl,totalSlices,enoughSalt}) / n;
    if (total >= n){
        cout << n;
    }
    else{
        cout << total;
    }
    return 0;
}
