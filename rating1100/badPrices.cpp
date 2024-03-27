#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    ll miniPrice = v[n-1];
    ll cnt = 0;
    for(int i = n-2; i >= 0; i--){
        if(v[i] > miniPrice){
            cnt++;
        }
        else{
            miniPrice = v[i];
        }
    }
    cout << cnt << endl;
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}