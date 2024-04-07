#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#define ll long long int

using namespace std;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll i = 0;
    ll j = 1;
    ll k = 2;
    string ans = "";
    while(i < n){
        ans += s[i];
        i = i + (j*k);
        k++;
    }
    
    cout << ans << endl;
}

int main() {
    solve();
    return 0; 
}
