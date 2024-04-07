#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#define ll long long int

using namespace std;

void solve() {
    string s;
    cin >> s;
    ll start = -1; 
    ll cnt = 0;
    ll n = s.size();
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (start != -1) {
                cnt += (i - start - 1);
            } start = i;
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
