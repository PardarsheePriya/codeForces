/******************************************************************************
10^4 is max n value
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#include <string>
#define ll long long int

using namespace std;

void solve(){
    ll x;
    cin >> x;
    ll digit = x%10;
    ll res = (digit-1)*10;
    ll num = digit;
    ll i = 1;
    while(num <= x){
        res+= (i++);
        num = num*10+digit;
    }
    
    cout << res << endl;
    
}
int main()
{
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}