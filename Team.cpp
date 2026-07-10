#include <iostream>
#include <vector>
using namespace std;
int main(){
    int number_attempts = 0,true_count = 0;
    int problem_count;
    int array[3];
    cin >> problem_count;
    for (int i = 0;i<problem_count;i++){
        cin >> array[0] >> array[1] >> array[2];
        for (int i = 0;i<3;i++){
            if (array[i] == 1)
                true_count++;
            if (true_count >= 2){
                number_attempts++;
                true_count = 0;
            }
        }
    }
    cout << number_attempts;
    return 0;
}
