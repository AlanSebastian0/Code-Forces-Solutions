#include <iostream>
#include <string>
using namespace std;

int main(){
    string binary;
    cin >> binary;
    int length = binary.size();
    bool dangerous = false;

    if (length >= 7) {
        for (int i = 0; i <= length - 7; i++){
            bool true_7 = true;
            for (int j = 0; j < 6; j++){
                if (binary[i + j] != binary[i + j + 1]){
                    true_7 = false;
                    break;
                }
            }
            if (true_7) {
                dangerous = true;
                break;
            }
        }
    }
    
    cout << (dangerous ? "YES" : "NO") << endl;
    return 0;
}
