#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <queue>
#define ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    ll ans = -1;
    for(ll i =0 ; i < n; i++){
        if(v[i] > ans+1){
            cout << i+1 << endl;
            return;
        }
        ans = max(ans, v[i]);
    }
    cout << -1 << endl;
    
}
int main(){
    solve();
    return 0;
}