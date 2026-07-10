#include <iostream>
using namespace std;
int main(){
    long long n,k,odd_count = 0,even_count = 0;
    cin >> n >> k;
    if (n % 2 == 0) {
        even_count = n/2;
        odd_count = even_count;
    }
    else {
        odd_count = (n+1) / 2;
        even_count = n - odd_count;
    }
    if (k <= odd_count){
        cout << k * 2 - 1; // in the odd area
    }
    else if (k > odd_count) {
        cout << (k - odd_count) * 2; //into the even area
    }
    return 0;
}
