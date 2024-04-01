#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    //make a divisble by b
    ll a, b;
    cin >> a >> b;
    ll remain = a%b;
    if(remain == 0){
        cout << 0 << endl;
    }
    else{
        cout << b-remain << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}