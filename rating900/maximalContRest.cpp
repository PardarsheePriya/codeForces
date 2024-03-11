#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0;i < n; i++){
        cin >> v[i];
    }
    
    ll ans = 0;
    ll cur = 0;
    int l = n+n;
    for(int i = 0; i < l; i++){
        if(i < n){
            if(v[i] == 1){
                cur++;
            }
            else{
                cur = 0;
            }
        }
        else{
            if(v[i-n] == 1){
                cur++;
            }
            else{
                cur = 0;
            }
        }
        ans = max(cur, ans);
    }
    
    cout << ans << endl;
    return 0;
}
