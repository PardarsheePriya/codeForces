#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;


int main() {
    ll t;
    cin >> t;
    vector<ll>v(t);
    for(ll i = 0; i < t; i++){
        cin >> v[i];
    }
    
    for(auto x: v){
        ll a = x%14;
        if(x > 14 && a > 0 && a < 7){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
    
}

