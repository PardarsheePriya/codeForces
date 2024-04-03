/******************************************************************************
n: cards
m: jokers
k: players

*******************************************************************************/
#include <iostream>
#include <cmath> 
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long int

using namespace std;


void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    if(m == 0){
        cout << 0 << endl;
        return;
    }
    
    ll eachP = n/k;
    if(m <= eachP){
        cout << m << endl;
        return;
    }
    
    //main
    if(m > eachP){
        ll remaind = m - eachP;
        ll oth = ceil(1.0*remaind/(k-1));
        cout << eachP - oth << endl;
    }
}


int main() {
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
