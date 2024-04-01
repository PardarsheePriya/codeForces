#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    if(n <= 2){
        cout << 1 << endl;
    }
    else{
        cout << 1 + (n-1)/2 << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}