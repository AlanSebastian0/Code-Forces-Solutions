#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int array[5][5] = {0};
    int ROW = 5;
    int COL = 5;
    for (int i = 0 ; i < ROW;i++){
        for (int j = 0;j<COL; j++){
            cin >> array[i][j];
        }
    }
    // middle is 2,2
    int moves = 0;
    int row_found = 0, col_found = 0;
    for (int i = 0;i<5;i++){
        for (int j = 0;j<5;j++){
            if (array[i][j] == 1){
                row_found = i + 1;
                col_found = j + 1;
                break;
            }
        }
    }
    moves = abs(row_found - 3) + abs(col_found - 3);
    cout << moves;

    return 0;
}
