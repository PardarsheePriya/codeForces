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
    ll n;
    cin >> n;
    ll prev = 0;
    ll x;
    ll res = 0;
    ll energy = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        energy += prev - x;
        if(energy < 0){
            res-= energy;
            energy = 0;
        }
        prev  = x;
    }
    
    cout << res << endl;
}
int main()
{
    solve();
}