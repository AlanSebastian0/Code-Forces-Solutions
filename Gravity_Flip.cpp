#include <bits/stdc++.h>
using namespace std;
void sort(vector<int>& storage);
int main(){
    int n;
    cin >> n;
    vector<int> storage(n);
    for (int i = 0;i < n; i++){
        cin >> storage[i];
    }
    sort(storage);
    for (int di : storage){
        cout << di << " ";
    }
    return 0;
}
void sort(vector<int>& storage){
    for (int i = 1;i < storage.size(); i++){
        int j = i;
        while(j > 0 && storage[j-1] > storage[j]){
            int temp = storage[j-1];
            storage[j-1] = storage[j];
            storage[j] = temp;
            j--;
        }
    }
}
