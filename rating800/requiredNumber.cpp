#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll x, y, n;
    cin >> x >> y >> n;
    ll curMod = n%x;
    ll reqChang = (curMod - y + x)%x;
    ll ans = n - reqChang;
    cout << ans << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}