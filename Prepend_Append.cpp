#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int n;
    string text;
    for (int i = 0; i < t; i++){
        int one_count = 0, zero_count = 0;
        cin >> n;
        int midpoint = n/2;
        int left = 0,right = n-1;
        cin >> text;
        while (left != midpoint && right != midpoint){
            while(text[left] == '1'){
                one_count++;
            } 
            while(text[right] == '0'){
                zero_count++;
            } 
            left++;
            right--;
        }
        cout << min(one_count,zero_count) << endl;
    }

    return 0;
}
