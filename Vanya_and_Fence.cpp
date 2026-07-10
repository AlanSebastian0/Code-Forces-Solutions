#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> friends_height;
    int no_friends,fence_height,height,width;
    cin >> no_friends >> fence_height;
    width = 0;
    for (int i = 0; i < no_friends;i++){
        cin >> height;
        if (height > fence_height){
            width += 2;
        }
        else
            width++;
    }
    cout << width;
    return 0;
}
