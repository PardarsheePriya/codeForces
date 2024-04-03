/******************************************************************************
every char should have even freq except one, condition:

odd0 = YES
odd1 = YES
odd2 = NO
odd3 = yes if(all freq > 0)
odd4 = yes if(all freq > 0)

*******************************************************************************/
#include <iostream>
#include <cmath> 
#include <string>
#define ll long long int

using namespace std;


void solve() {
    ll n;
    cin >> n;
    while(n--){
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        ll oddCnt = 0;
        if(r%2 == 1){
            oddCnt++;
        }
        if(g%2 == 1){
            oddCnt++;
        }
        if(b%2 == 1){
            oddCnt++;
        }
        if(w%2 == 1){
            oddCnt++;
        }
        
        if(oddCnt == 2 || (oddCnt >= 3 && (r == 0 || g == 0 || b == 0)) ){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
