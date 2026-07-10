#include <iostream>
#include <string>
using namespace std;

int main(){
    string stones;
    int stone_count = 0;
    int remove_count = 0;
    cin >> stone_count >> stones;
    for (int i= 0;i<stone_count-1;i++){ //stone_count - 1 so we can check the last index without going out of nounds
        if (stones[i+1] == stones[i]){
            remove_count++;
        }
    }
    cout << remove_count;
    return 0;
}
