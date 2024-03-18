#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <queue>
#define ll long long

using namespace std;

void solve(){
    ll l, r;
    cin >> l >> r;
    ll pair = (r-l+1)/2;
    if(pair > (r-l)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        while(pair--){
            cout << l << " "<< l+1 << endl;
            l+=2;
        }
    }
    
    
}
int main(){
    solve();
    return 0;
}