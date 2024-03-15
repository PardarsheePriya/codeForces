#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;

void solve() {
    ll x, y;
    cin >> x >> y;
    if(x == 1 && y > 1){
        cout << "NO" << endl;
        return;
    }
    if(x <= 3 && y > 3){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        return;
    }
}


int main() {
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
 