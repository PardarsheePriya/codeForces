/*
theatre size: n x m
flagstone: a x a
*/

#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <iomanip>

#define ll long long int

using namespace std;

void solve(){
    // 6 x 6 = 36
    // 4 x 4 = 16
    
    ll n, m, a;
    cin >> n >> m >> a;
    ll ans = ceil(n*1.0 / a) * ceil(m*1.0 / a);
    cout << ans << endl;
}

int main(){
    solve();
    return 0;
}