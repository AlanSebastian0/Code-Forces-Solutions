#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int>& coins);
int main(){
    int n,temp;
    int total = 0;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n;i++){
        cin >> coins[i];
    }
    sort(coins);
    for (int digit : coins){
        total += digit;
    } // stores the total sum of the coins
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n;i++){
        sum1 += coins[i];
        sum2 = total - sum1;
        if (sum1 > sum2){
            cout << i + 1; //i+1 due to the 0 based indexing
            break;
        }
    }
    return 0;
}
void sort(vector<int>& coins){
    int length = coins.size();
    for (int i = 1; i < length;i++){
        int j = i;
        while ( j > 0 && coins[j-1] < coins[j]){
            int temp = coins[j-1];
            coins[j-1] = coins[j];
            coins[j] = temp; //swaps them until j >= 0
            j--;
        }
    }
}
