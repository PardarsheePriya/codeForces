/*
to be equilibrium sum of forces should be zero
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

void solve(){
    ll n, a, b, c;
    cin >> n;
    ll sum = 0;
    ll x = 0;
    ll y = 0;
    ll z= 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b>> c;
        x+=a;
        y+=b;
        z+=c;
    }
    
    if(x == 0 && y == 0 && z == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}

int main(){
    solve();
    return 0;
}