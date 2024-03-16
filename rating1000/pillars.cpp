#include <iostream>
#include<cmath>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>
#define ll long long

using namespace std;


void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    int max_index = 0;
    int maxi = INT_MIN;
    for(ll i = 0; i < n; i++){
        cin >> v[i]; 
    }
    bool fl = true;
    
    for(int i = 1; i < n-1; i++){
        if(v[i] <= v[i-1] && v[i] <= v[i+1]){
            fl = false;
        }
    }
    
    if(fl){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    
}
int main(){
    solve();
}