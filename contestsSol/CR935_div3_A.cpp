#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <climits>

#define ll long long
using namespace std;
void solve(){
    ll a, b, c;
        cin >> a >> b >> c;
        
        ll ans = 0;
        if(b% 3 == 0){
            ll x = b/3;
            ans += x;
            if(c%3 == 0){
                    ans+= c/3;
                    ans += a;
                }
            else{
                ans += (c/3)+1;
                ans += a;
                
            }
        }
        else{
            ll x = b+c;
            if(x%3==0){
                ans += x/3;
                ans += a;
            }
            else{
                x = x/3;
                if(x*3 >= b){
                    ans += x+1;
                    ans += a;
                }
                else{
                    cout << -1 << endl;
                    return;
                }
            }
        }
        
        cout << ans << endl;
}
int main(){
    int test;
    cin>> test;
    while(test--){
        solve();
    }
}