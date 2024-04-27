/******************************************************************************
Not Dividing: https://codeforces.com/problemset/problem/1794/B

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <climits>
#include <string>

#define ll long long int

using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    ll maxi = INT_MIN;
    for(ll i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == 1){
            v[i]++;
        }
    }
    for(int i = 0; i < n-1; i++){
        if(v[i+1]%v[i] == 0){
            v[i+1]++;
        }
    }
    
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
    
}

int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}
