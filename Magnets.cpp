#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0;
    string current;
    string previous;
    cin >> n;
    int group_count = 0;
    cin >> previous; // set the first one up
    for (int i = 0; i < n-1; i++){ // n-1 as the first index is recieved from the line above
        cin >> current;
        if (current != previous){
            group_count++;
        }
        previous = current; //the new previous comes up
    }
    group_count++;
    cout << group_count;
    return 0;
}
