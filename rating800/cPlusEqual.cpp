/******************************************************************************
a + b > n
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;

void solve(){
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = 0;
    while(a+b <= n){
        ans++;
        if(a < b){
            a = a+b;
        }
        else{
            b = a+b;
        }
    }
    
    
    cout << ans+1 << endl;
}
int main()
{
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}