#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define  ll long long

using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll a = n/k;
    ll b = n%k;
    ll c = min(b, k/2);
    cout << a*k + c << endl;
    
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}