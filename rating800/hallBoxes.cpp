#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll>v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    if(k >= 2){
        cout << "YES" << endl;
        return;
    }
    bool isSorted = true;
    if(k == 1){
        for(int i = 0; i < n-1; i++){
            if(v[i] > v[i+1]){
                isSorted = false;
                break;
            }
        }
    }
    
    if(isSorted){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}