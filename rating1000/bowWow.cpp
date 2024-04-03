/******************************************************************************
s (time when bowwow reached)
example 1: 64 32 16 8 4 2 1
            1 0  0 0 0 0 0
*******************************************************************************/
#include <iostream>
#include <cmath> 
#include <string>
#define ll long long int

using namespace std;


void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if(n%2 == 0){
        cout << n/2 << endl;
    }
    else{
        int cnt1 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                cnt1++;
            }
        }
        if(cnt1 >1 ){
            cout << n/2 + 1 << endl;
        }
        else{
            cout << n/2 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
