#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll choc;
    cin >> choc;
    if(choc <= 2){
        cout << 0 << endl;
    }
    else{
        if(choc%2 == 0){
            cout << (choc/2) - 1 << endl;
        }
        else{
            cout << (choc/2) << endl;
        }
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}