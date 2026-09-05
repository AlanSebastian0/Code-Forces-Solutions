#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> ans;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> storage(n);
        int even_count = 0;
        int min_op = k; 
        
        for (int i = 0; i < n; i++){
            cin >> storage[i];
            
            // Count even numbers for the special k = 4 case
            if (storage[i] % 2 == 0) {
                even_count++;
            }
        }
        
        // Find the minimum operations to make a single element divisible by k
        for (int di : storage){
            int ops_needed = (k - (di % k)) % k;
            if (ops_needed < min_op) {
                min_op = ops_needed;
            }
        }
        
        // Special case handling for k = 4
        if (k == 4) {
            int pair_ops = 0;
            if (even_count >= 2) {
                pair_ops = 0;
            } else if (even_count == 1) {
                pair_ops = 1;
            } else {
                pair_ops = 2;
            }
            // Take the best option between changing 1 element vs making 2 elements even
            min_op = min(min_op, pair_ops);
        }
        
        ans.push_back(min_op);
    }
    
    for (int a : ans){
        cout << a << endl;
    }
    return 0;
}

