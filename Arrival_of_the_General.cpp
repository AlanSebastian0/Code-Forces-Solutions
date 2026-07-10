#include <bits/stdc++.h>
using namespace std;
int first_max(vector<int>& vec);
int last_min(vector<int>& vec);
int main(){
    int len = 0;
    cin >> len;
    vector<int> array(len);
    for (int i = 0; i < len; i++){
        cin >> array[i];
    }
    int max_index = first_max(array);
    int min_index = last_min(array);
    int total_swaps = max_index + (len - 1 - min_index);
    if (max_index > min_index){
        total_swaps--;// special case when swaps they cross paths
    }
    cout << total_swaps;
    return 0;
}
int first_max(vector<int>& vec){
    int max = vec[0];
    int index = 0;
    for (int i = 0;i < vec.size(); i++){
        if (vec[i] > max){
            max = vec[i];
            index = i;
        }
    }
    return index;
}
int last_min(vector<int>& vec){
    int min = vec[vec.size() -1];
    int index = vec.size() - 1;
    for (int i = vec.size() - 1;i >= 0; i--){
        if (vec[i] < min) {
            min = vec[i];
            index = i;
        }
    }
    return index;
}
