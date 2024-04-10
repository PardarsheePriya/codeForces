/******************************************************************************
Palindromic Twist
*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve(){
    string p, h;
    cin >> p >> h;
    sort(p.begin(), p.end());
    string n;
    int n1 = p.size();
    int n2 = h.size();
    bool flag = false;
    for(int i = 0; i <= n2-n1; i++){
        n = h.substr(i, n1);
        sort(n.begin(), n.end());
        if(n == p){
            flag = 1;
            break;
        }
        
    }
    
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}