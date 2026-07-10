#include <bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin >> s >> n;
    vector<pair<int,int>> Dragons(n);
    for (int i = 0; i < n; i++){
        cin >> Dragons[i].first >> Dragons[i].second;
    }
    sort(Dragons.begin(), Dragons.end());
    for (auto& pair : Dragons){
        if (s > pair.first){
            s += pair.second;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
