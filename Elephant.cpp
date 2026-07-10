#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float pos;
    cin >> pos;
    if (pos <= 5){
        cout << 1;
        return 0;
    }
    int steps = ceil(float(pos / 5));
    cout << steps;
    return 0;
}
