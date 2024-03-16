#include <iostream>
#include<cmath>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>
#include <unordered_set>
#define ll long long

using namespace std;


void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll ans = 1;
    for(ll i = 1; i < n; i++){
        if(v[i] > ans){
            ans++;
        }
    }
    
    cout << ans << endl;
}
int main(){
    solve();
}