#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, target = "hello";
    cin >> s;
    
    int k = 0; // Pointer for the target "hello"
    
    for (int i = 0; i < s.length(); i++) {
        // If current letter matches the required character in "hello"
        if (s[i] == target[k]) {
            k++;
            // If all letters of "hello" are found, we're done
            if (k == 5) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    
    // If we finished the loop without finding all 5 characters
    cout << "NO" << endl;
    return 0;
}

