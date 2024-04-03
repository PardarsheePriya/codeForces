/******************************************************************************
finding max factor and then dividing it with number of places

*******************************************************************************/
#include <iostream>
#include <cmath> 
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long int

using namespace std;


void solve() {
    double n, k;
    cin >> n >> k;
    double factor = ceil(n/k);
    k = k*factor;
    ll ans = ceil(k/n);
    cout << ans << endl;
}


int main() {
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
