#include <bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin >> word;
    
    bool hasStarted = false; // Track if we have printed anything yet
    bool justSkippedWub = false; // Track if a space is "pending"
    
    int length = word.size();
    for (int i = 0; i < length; ){
        // 1. Detect WUB
        if (i+2 < length && word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B'){ 
            i += 3;
            // Only flag that we need a space if we've already printed something
            if (hasStarted) {
                justSkippedWub = true;
            }
        }
        // 2. It's a real letter
        else {
            // If we have a pending space, print it now
            if (justSkippedWub) {
                cout << " ";
                justSkippedWub = false; // Reset the flag
            }
            
            cout << word[i];
            hasStarted = true; // Mark that we are now inside the song
            i++;
        }
    }
    return 0;
}

