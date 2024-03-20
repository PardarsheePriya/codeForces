#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < n-1; i++){
        ll a = v[i-1];
        ll b = v[i];
        ll c = v[i+1];
        if(a+b > c){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
    
int main(){
    solve();
}