#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,next;
    int current;
    cin >> n;
    cin >> m;
    cin >> current;
    long long distance = 0;
    distance += current-1;
    for (int i = 1; i < m; i++){
        cin >> next;
        if (next < current){
            distance += (n-current) + next; 
        }
        else if (next > current){
            distance += next - current;
        }
        current = next;
    }
    cout << distance;
    return 0;
}
