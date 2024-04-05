/******************************************************************************
GCD Length
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>

#define ll long long int

using namespace std;

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll z = pow(10, c-1);
    ll x, y;
    x = z, y = z;
    while(to_string(x).size() < a){
        x = x*2;
    }
    while(to_string(y).size() < b){
        y = y*3;
    }
    
    cout << x << " " << y << endl;
}
int main()
{
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}