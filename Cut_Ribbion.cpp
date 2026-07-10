#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n+1,-1);
    dp[0] = 0; //This was an underated thing I overlooked this is what actually starts the whole thing. a langth of 0 means 0 at the end, without this the entire dp array would be full of 'impossibles'
    for (int i = 1; i < n+1;i++){
        if (i>=a && dp[i-a] != -1){
            dp[i] = max(dp[i],dp[i-a] + 1);
        }
        if (i>=b && dp[i-b] != -1){
            dp[i] = max(dp[i],dp[i-b] + 1);
        }
        if (i>=c && dp[i-c] != -1){
            dp[i] = max(dp[i],dp[i-c]+1); //+1 is important as when you minus that is a cut
        }
    }
    cout << dp[n];
    return 0;
}
