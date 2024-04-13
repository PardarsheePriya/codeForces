/******************************************************************************
find lower bound and upper bound sum
and check if x is present in that range

*******************************************************************************/
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll n, m, k;
    cin >> n >> m >> k;
    ll ans = n - (n / m + (n % m != 0));
    if (ans <= k){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}