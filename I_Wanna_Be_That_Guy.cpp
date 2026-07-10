#include <bits/stdc++.h>

using namespace std;

int main(){
    int total_levels = 0;
    int p,q,counter=0;
    cin >> total_levels;
    vector<bool> levels_stored(total_levels+1,false);
    int level = 0;
    cin >> p;
    for (int i = 1; i <= p;i++){
        cin >> level;
        if (!levels_stored[level]){
            levels_stored[level] = true;
            counter++;
        }
    }
    cin >> q;
    for (int i = 1; i <= q; i++){
        cin >> level;
        if (!levels_stored[level]){
            levels_stored[level] = true;
            counter++;
        } 
    }
    if (counter == total_levels){
        cout << "I become the guy.";
    }
    else
        cout << "Oh, my keyboard!";
}
