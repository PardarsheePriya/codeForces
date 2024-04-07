/******************************************************************************
10^4 is max n value
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#define ll long long int

using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll ans = 0;
    ll sum = 0;
    while(sum <= n){
        ans++;
        sum += ans*(ans+1)/2;
    }
    cout << ans-1 << endl;
}
int main()
{
    solve();
}