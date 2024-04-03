/******************************************************************************
Theatre: n x m (metres)
Flagstone: a x a

*******************************************************************************/
#include <iostream>
#include <cmath> // Include cmath for ceil function
#define ll long long int

using namespace std;

void solve() {
    ll n, m, a; // Use long long integers for dimensions
    cin >> n >> m >> a;
    ll ans = 0;
    ans += (ceil(1.0 * n / a) * ceil(1.0 * m / a)); // Convert to double before division
    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
