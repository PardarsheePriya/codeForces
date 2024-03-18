#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <queue>
#include <map>
#define ll long long

using namespace std;

void solve(){
    
    ll n,m;
    map<ll,ll>mp;

    ll c,d;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>c>>d;
        mp[c] = d;
    }
    cin>>m;
    for(ll i=0; i<m; i++){
        cin>>c>>d;
        if(mp[c] < d){
            mp[c] = d;
        }
    }
    ll sum = 0;
    for(auto it: mp){
        sum += it.second;
    }
    cout<<sum<<endl;

}
int main(){
    solve();
    return 0;
}