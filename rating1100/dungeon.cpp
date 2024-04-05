/******************************************************************************

regular shot - change anyone (-1)
enhaced shot - multiple of 7th shot (-3)
health of each monster should be 1

total change should be multiple of 9

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>

#define ll long long int

using namespace std;

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    ll sum = a + b + c;
    ll shot = sum/9;
    if(sum%9 == 0 && a >= shot && b >= shot && c >= shot){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main()
{
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}