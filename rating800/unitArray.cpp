#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll multi = 1;
    ll cntP = 0;
    ll cntN = 0;
    ll sum = 0;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        multi *= v[i];
        sum+= v[i];
        if(v[i] > 0){
            cntP++;
        }
        else{
            cntN++;
        }
    }
    ll ans  =0;
    while (!((cntP - cntN) >= 0 and cntN % 2 == 0))
    {
        cntN--;
        cntP++;
        ans++;
    }

    cout << ans << nline;
}

int main()
{
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
}
