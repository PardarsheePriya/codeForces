#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long 
using namespace std;

int main(){
    ll n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0;i < n; i++){
        cin >> v[i];
    }
    
    vector<pair<ll, ll>>pa;
    for(int i = 0;i < n; i++){
        pa.push_back({v[i], i+1});
    }
    
    sort(pa.rbegin(), pa.rend());
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += pa[i].first*i + 1;
    }
    
    cout << ans << endl;
    for(auto it: pa){
        cout << it.second << " ";
    }
    
    return 0;
}