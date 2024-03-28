#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    vector<ll>dist;
    ll prev = 0;
    for(int i = 0; i < n; i++){
        prev = v[i] - prev;
        dist.push_back(prev);
        prev = v[i];
    }
    
    prev = x-v[n-1];
    prev = prev*2;
    dist.push_back(prev);
    
    ll ans = 0;
    for(int i =0; i < dist.size(); i++){
        ans = max(ans, dist[i]);
    }
    
    cout << ans << endl;
    
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}