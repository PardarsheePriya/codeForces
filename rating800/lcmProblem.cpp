#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll l, r;
    cin >> l >> r;
    //lcm of x and y should be in range, so we can take l and 2xl where lcm which 2xl and will be in range
    ll x = l;
    ll y = 2*x;
    if(x >= l && y <= r){
        cout << x << " " << y << endl;
    }
    else{
        cout << -1 << " " << -1 << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}