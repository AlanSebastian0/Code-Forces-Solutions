#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int t;
    string line;
    cin >> n >> t;
    cin >> line;
    int index = 0;
    char temp = 'a';
    while(t!=0){
        for (int index = 0; index < n-1;index++){
            if (line[index] == 'B' && line[index+1] == 'G'){
                temp = line[index];
                line[index] = line[index+1];
                line[index+1] = temp; //swaps the two
                index++; //it doesnt say explicity but apparently a boy moved can not be moved again so index++ ontop of the for lop index++ makes it skip the boy that was swapped.
            }
        }
        t--; //after going through the entire string to check decrease the time by 1 which is then repeated depending on the time;
    }
    cout << line;
    return 0;
}
