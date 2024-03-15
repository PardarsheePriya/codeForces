#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == 1 && k == 1) {
        cout << "0" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (k == 0) {
            break;
        }
        if (i == 0 && s[i] > '1') {
            s[i] = '1';
            k--;
        }
        else if (i != 0 && s[i] > '0') {
            s[i] = '0';
            k--;
        }
    }
    cout << s << endl;
}


int main() {
    solve();
    return 0;
}

