#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long n, m, k;
    cin >> n >> m >> k;
    
    long long max1 = -1, max2 = -1;
    
    for (long long i = 0; i < n; i++) {
        long long val;
        cin >> val;
        if (val > max1) {
            max2 = max1;
            max1 = val;
        } else if (val > max2) {
            max2 = val;
        }
    }

    long long ans = (m / (k + 1)) * (k * max1 + max2) + (m % (k + 1)) * max1;
    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
