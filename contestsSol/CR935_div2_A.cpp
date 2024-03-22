//Median of An array

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <iomanip>

#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    ll k = n / 2;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // if (n == 1) {
    //     cout << 1 << endl;
    // }
    ll cnt = 0;
    if (n % 2 == 0) {
        k = k - 1;
    }
    sort(v.begin(), v.end());
    for (int i = k; i < n; i++) {
        if (v[i] == v[k]) {
            cnt++;
        }
    }
    
    cout << cnt << endl;
}

int main() {
    ll test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}
