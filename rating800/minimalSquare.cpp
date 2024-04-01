#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll a, b;
    cin >> a >> b;
    if(a < b){
        a = a*2;
        cout << max(a, b) * max(a, b) << endl;
    }
    else{
        b = b*2;
        cout << max(a, b)*max(a, b) << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}