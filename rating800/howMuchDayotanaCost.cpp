#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
    int n;
    ll k;
    cin >> n >> k;
    vector<ll>v(n);
    bool flag = false;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == k){
            flag = true;
        }
    }
    
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}