#include <iostream>
using namespace std;

int main(){
    int n = 0,sum = 0;;
    int a;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> a;
        sum += a;
    }
    float result = (float)sum / ((float)n*100);
    cout << result * 100;
    return 0;
}
