#include <iostream>
using namespace std;

int main(){
    int easy_count = 0;
    int n;
    int temp = 0;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> temp;
        if (temp == 0){
            easy_count++;
        }
    }
    if (easy_count != n)
        cout << "Hard";
    else
        cout << "Easy";
    return 0;
}
