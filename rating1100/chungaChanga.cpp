/*
x = sasha chijki
y = masha chijki
z = price of coconut
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

void solve(){
    ll x, y, z;
    cin >> x >> y >> z;
    ll  maxi = (x+y)/z;
    ll trans1 = x/z;
    ll trans2 = y/z;
    if(trans1+trans2 < maxi){
        ll need1 = z-x%z;
        ll need2 = z-y%z;
        cout << maxi << " ";
        cout <<  min(need2, need1)<< endl;
    }
    else{
        cout << maxi << " ";
        cout << 0 << endl;
        
    }
}

int main(){
    solve();
}