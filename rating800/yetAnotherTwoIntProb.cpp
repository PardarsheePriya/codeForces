#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    // make a to b
    ll a, b;
    cin >> a >> b;
    ll dif = abs(a-b);
    dif = ceil(dif/10.0);
    cout << dif << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}