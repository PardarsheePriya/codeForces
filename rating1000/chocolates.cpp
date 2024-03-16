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
    ll ans = v[n-1];
    ll last = v[n-1];
    for(ll i = n-2; i >= 0; i--){
        if(last == 1){
            break;
        }
        if(v[i] < last){
            ans += v[i];
            last = v[i];
        }
        else{
            ans += last-1;
            last = last -1;
        }
    }
    
    cout << ans << endl;
}
int main(){
    solve();
}