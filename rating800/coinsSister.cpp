#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    ll total_coins = a+b+c+n;
    if(total_coins%3 == 0){
        if(a > total_coins/3 || b>total_coins/3 || c > total_coins/3){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    else{
        cout << "No" << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}