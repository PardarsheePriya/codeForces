#include <iostream>
#include<cmath>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>
#include <unordered_set>
#define ll long long

using namespace std;


void solve(){
    ll n, k;
    cin >> n >> k;
    if(k == n || k == 1){
        cout << n*3 << endl;
    }
    else{
        cout << n*3 + min(abs(k-1), abs(n-k));
    }
}
int main(){
    solve();
}