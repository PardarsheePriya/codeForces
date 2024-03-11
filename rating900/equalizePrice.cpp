#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector <ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    ll ans = v[0]+k;
    if(abs(ans-v[0]) <= k && abs(ans - v[n-1]) <= k){
        cout << ans << endl;
    }
    else{
        cout << -1 << endl;
        }
}
int main(){
    int query;
    cin >> query;
    while(query--){
        solve();
    }
}