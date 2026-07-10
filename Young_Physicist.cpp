#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x,y,z;
    int finalX = 0, finalY = 0, finalZ = 0;
    for (int i = 0; i<n;i++){
        cin >> x >> y >> z;
        finalX += x;
        finalY += y;
        finalZ += z;
    }
    if (finalZ == 0 && finalX == 0 && finalZ == 0){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
