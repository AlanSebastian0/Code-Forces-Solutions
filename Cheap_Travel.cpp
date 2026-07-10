#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int cost1 = n * a;
    int mtickets = n / m;
    int leftover = n % m;
    int cost2 = min(mtickets * b + leftover * a, (mtickets + 1) * b);
    cout << min(cost1, cost2);
    return 0;
}
