#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <iomanip>
#include <cmath>

#define ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;
    
    ll sqr = sqrt(n);
    ll extra = n - (sqr*sqr);
    if(extra == 0){
        cout << sqr*4 << endl;
    }
    else if(extra <= 2){
        cout << (sqr*4) + 2 << endl;
    }
    else{
        cout << (sqr*4) + 4 << endl;
    }
}
int main(){
    solve();
}