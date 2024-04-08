/*
a : total stairs
b : multiple of
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

void solve(){
    ll a, b;
    cin >> a >> b;
    if(a < b){
        cout << -1 << endl;
        return;
    }
    else{
        //even
        ll ans = 0;
        if(a % 2 == 0){
            ans = a/2; //even moves
        }
        //odd
        else{
            ans = a/2 + 1; //odd moves
            
        }
        
        //finding modulas
        while(ans%b > 0){
                ans++;
        }
        cout << ans << endl;
    }
}
int main()
{
    solve();

    return 0;
}
