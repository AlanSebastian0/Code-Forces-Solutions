#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int length;
    cin >> t;
    vector<string> answers(t,"YES");
    for (int i = 0; i < t; i++){
        cin >> length;
        vector<int> arr(length);
        for (int j = 0; j < length;j++) cin >> arr[j];
        sort(arr.begin(),arr.end());
        for (int j = 0; j < length-1; j++){
            if ((arr[j+1] - arr[j]) > 1){
                answers[i] = "NO";
                break;
            }
        }
    }
    for (string s : answers) cout << s << endl;
    return 0;
}

