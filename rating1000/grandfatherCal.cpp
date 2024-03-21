#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <unordered_set>
#include <map>
#define ll long long

using namespace std;

map<ll, ll> sample = {{0, 6}, {1, 2}, {2, 5}, {3, 5}, {4, 4}, {5, 5}, {6, 6}, {7, 3}, {8, 7}, {9, 6}};

void solve() {
    ll l, r;
    cin >> l >> r;
    
    ll ans = 0;
    for(ll i = l; i <= r; i++) {
        ll num = i; 
        while(num > 0) {
            ll digit = num % 10;
            ans += ::sample[digit];
            num = num / 10; 
        }
    }
    cout << ans << endl;
}
    
int main() {
    solve();
    return 0;
}
