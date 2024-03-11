v#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

void solve(){
    int l, r;
    ll odd, even;
    cin >> l >> r;
    if(l%2 == 1 && r%2 == 1){
        cout << -1*((l-r)/2+r) << endl;
    }
    else if(l%2 == 1 && r%2 == 0){
        cout << (r-l+1)/2 << endl;
    }
    else if(l%2 == 0 && r%2 == 0){
        cout << (l-r)/2+r << endl;
    }
    else if(l%2 == 0 && r%2 == 1){
        cout << -1*((r-l+1)/2) << endl;
    }
    
}
int main(){
    int q;
    cin >> q;
    while(q--){
        solve();
    }
}