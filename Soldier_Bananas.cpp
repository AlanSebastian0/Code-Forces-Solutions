#include <iostream>

using namespace std;
int main(){
    int cost,cash,no_bananas;
    cin >> cost >> cash >> no_bananas;
    cash -= cost;
    for (int i = 2;i<no_bananas+1;i++){
        cash -= cost*i;
    }
    if (cash >= 0){
        cout << 0;
    }
    else {
        cout << cash*-1;
    }
    return 0;
}
