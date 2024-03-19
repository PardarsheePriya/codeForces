#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <climits>

#define ll long long
using namespace std;
void solve(){
    ll a, b, m;
    cin >> a >> b >> m;
    ll cnta = m/a;  //a repeat
    ll cntb = m/b;  //b repeat
    
    cout << cntb + cnta +2 << endl;
}
int main(){
    int test;
    cin>> test;
    while(test--){
        solve();
    }
}