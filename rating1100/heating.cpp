/*
n = rooms
c[i] = max radiator can be installed (places)
k (section) cost = k^2
sum[i] = atleast required section
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    while(n--){
        ll ci, sumi;
        cin >> ci >> sumi;
        if(ci >= sumi){
            cout << sumi<<endl;
        }
        else{
            ll t = sumi/ci;
            ll extra = sumi%ci;
            ll ans = 0;
            if(extra == 0){
                ans = ci*t*t;
            }
            else{
                ans = (t*t*(ci-extra))+extra*(t+1)*(t+1);
            }
            
            cout << ans << endl;
        }
    }
}

int main(){
    solve();
}