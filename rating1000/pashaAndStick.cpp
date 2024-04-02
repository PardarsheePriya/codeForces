/*
Rectangle

corner: (0, 0) && (w, h)
area of triangle: 1/2 x b x h
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    if(n%2 == 1){
        cout << 0 << endl;
        return;
    }
    
    if(n > 3){
        ll ans = n/4;
        if(n % 4 == 0) {
            ans--; 
        }
        cout << ans << endl;
        return;
    }
    cout << 0 << endl;
}

int main(){
    solve();
    return 0;
}