/******************************************************************************
k - first bananan cost
n - money he has
w - banana we wants to buy
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;

void solve(){
    ll k, n, w;
    cin >> k >> n >> w;
    ll sum = (w*(w+1))/2;
    ll total_money = sum*k;
    
    ll ans = total_money - n;
    
    if(ans > 0){
        cout << ans << endl;
    }
    else{
        cout << 0 << endl;
    }
}
int main()
{
    solve();
}