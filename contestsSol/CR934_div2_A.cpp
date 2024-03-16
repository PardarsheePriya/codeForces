#include <iostream>
#include <vector>
#include <algorithm>
 
#define ll long long
using namespace std;
 
void solve() {
    ll n, k;
    cin >> n >> k;
    
    if(k < n-1){
        cout << n << endl;
    }
    else{
        cout << 1 << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}