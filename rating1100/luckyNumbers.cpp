/******************************************************************************
GCD Length
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>

#define ll long long int

using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll ans = pow(2, n);
    ll res = 2*(ans -1);
    cout << res << endl;
}
int main()
{
    solve();
}