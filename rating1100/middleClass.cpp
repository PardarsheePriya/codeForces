#include <iostream>
#include <algorithm>
#include <vector>

#define ll long long

using namespace std;

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll>v(n);
    ll sum = 0;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    
    sort(v.begin(), v.end());
    
    if(sum/n >= x){
        cout << n << endl;
        return;
    }
    
    int k = n;
    for(int i = 0; i < n; i++){
    sum -= v[i];
    k--;
    if (k == 0) {
        cout << k << endl;
        return;
    }
    ll avg = sum / k;
    if(avg >= x){
        cout << k << endl;
        return;
    }
}

    
    cout << 0 << endl;
    
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}