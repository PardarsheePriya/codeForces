/******************************************************************************
Mainak and Array: 

Explaination: if we cyclically rotate array, we can ovbserve the following

a1 a2 a3 a4 a5 ans = a5 -a1
a2 a3 a4 a5 a1 ans = a1 - a2
a3 a4 a5 a1 a2 ans = a2 - a3
.
.
.
a5 a1 a2 a3 a4 ans = a4 - a5
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <climits>

#define ll long long int

using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    ll maxi = v[n-1] - v[0];
    //fixing n-1 pos
    for(int i = 0; i < n-1; i++){
        maxi = max(maxi, v[n-1] - v[i]);
    }
    
    // fixing 1st pos
    for(int i = 1; i < n; i++){
        maxi = max(maxi, v[i] - v[0]);
    }
    
    //not fixing, going with observation
    for(int i = 0; i < n -1; i++){
        maxi = max(maxi,v[i] - v[i+1]);
    }
    
    cout << maxi << endl;
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}