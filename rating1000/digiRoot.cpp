#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
   ll k, x;
   cin >> k >> x;
   ll ans = ((k-1)*9) + x;
   cout << ans << endl;
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}