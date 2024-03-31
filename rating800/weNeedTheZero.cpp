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
    vector<ll>v(n);
    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    if(n%2 == 0){
        for(int i = 0; i < n; i++){
            ans ^= v[i];
        }
        
        if(ans == 0){
            cout << 0 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            ans ^= v[i];
        }
        cout << ans << endl;
    }
}

int main()
{
    ll test;
    cin >> test;
    while (test--) 
    {
        solve();
    }
}
