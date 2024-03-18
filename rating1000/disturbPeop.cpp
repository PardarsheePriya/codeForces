#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>

#define ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    //process
    
    ll last = 0;
    ll cnt = 0;
    ll ans = 0;
    for(int i = 1; i < n-1; i++){
        if(v[i-1] == 1 && v[i] == 0 && v[i+1] == 1){
            // if(last != 0 && i - last == 2){
            //     ans++;
            // }
            cnt++;
            v[i+1] = 0;
        }
    }
    
    cout << cnt << endl;
    
}
int main(){
    solve();
    return 0;
}