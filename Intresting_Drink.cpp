#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n;
    vector<int> price_of_shops(n);
    for (int i = 0; i < n; i++) cin >> price_of_shops[i];
    cin >> q;
    vector<int> no_coins_each_day(q);
    for (int i = 0; i < q; i++) cin >> no_coins_each_day[i];

    int count = 0;
    vector<int> answers(q);
    sort(price_of_shops.begin(), price_of_shops.end()); //there was an error where i did.begin() isntead of .end();
    for (int i = 0; i < q; i++){
        int low = 0;
        int high = n-1;
        while (low <= high){
            int mid = low + (high - low) / 2;
            if (price_of_shops[mid] > no_coins_each_day[i]){
                high = mid - 1;
            }
            else if (price_of_shops[mid] <= no_coins_each_day[i]){
                count = mid + 1;
                low = mid+1;
            }
        }
        answers[i] = count;
        count = 0;
    }
    for (int di : answers){
        cout << di << endl;
    }
    return 0;
}
