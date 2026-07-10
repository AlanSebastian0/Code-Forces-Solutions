#include <bits/stdc++.h>
using namespace std; 
int main(){
    int requests;
    map<string,int> mp;
    set<string> existing_names;
    int number_append = 1;
    cin >> requests;
    vector<string> names(requests);
    for (int i = 0; i < requests; i++){ //input their names
        cin >> names[i];
    }
    for (string name : names){
        if (!existing_names.count(name)){ //.count() finds if that name is found in existing_names. if not it prints okay 
            cout << "OK" << endl;
            existing_names.insert(name); //insert the name if it was not found
        }
        else{
            mp[name]++;
            cout << name << mp[name] << endl;
        }
    }
    return 0;
}
