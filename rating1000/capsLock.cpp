/******************************************************************************
Caps Lock

*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve(){
    string s;
    cin >> s;
    bool isupp = true;
    
    for(int i = 1; i < s.size(); i++){
        if(!isupper(s[i])){
            isupp = false;
        }
    }
    
    if(isupp || s.size() == 1){
        for(int i = 1; i < s.size(); i++){
            s[i] = tolower(s[i]);
            
        }
        if(isupper(s[0])){
                s[0] = tolower(s[0]);
            }
            else{
                s[0] = toupper(s[0]);
            }
    }
    cout << s << endl;
}

int main(){
    solve();
    return 0;
}