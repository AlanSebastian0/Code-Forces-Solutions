#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n = 0;
    int a,b;
    cin >> n;
    int cap = 0;
    int cap_max = -1;
    for (int i = 0; i < n;i++){
        cin >> a >> b;
        cap = cap + b -a;
        if (cap > cap_max) cap_max = cap;
    }
    cout << cap_max;
    return 0;
}
