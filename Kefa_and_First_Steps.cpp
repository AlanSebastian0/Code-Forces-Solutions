#include <bits/stdc++.h>
using namespace std;
int main(){
    int length,max = 0;
    int previous,count = 0;
    int current = 0;
    cin >> length;
    cin >> previous;
    for (int i = 1;i < length; i++){
        cin >> current;
        if (current >= previous){
            count++;
        }
        else{
            count = 0;
        }
        if (count > max) {
            max = count;
        }
        previous = current;
    }
    max++;
    cout <<max;
    return 0;
}
