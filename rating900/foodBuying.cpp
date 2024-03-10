#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define  ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;
    if(n < 10){
        cout << n << endl;
    }
    else{
        ll ans = n;
        while(n>=10){
                ll divi=n/10;
                n=n%10;
                n=n+divi;
                ans+=divi;
            }
            cout<<ans<<"\n";
    }
    
}

int main(){
    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}