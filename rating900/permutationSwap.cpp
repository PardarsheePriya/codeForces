/******************************************************************************
Permutation Swap: https://codeforces.com/problemset/problem/1828/B
Explanation:

Find highest common factor
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>
#include <iomanip>
#include <cmath>

#define ll long long int

using namespace std;
void solution(){
    ll n;
    cin >> n;
    vector<ll>p(n+1);
    for(int i = 1; i <= n; i++){
        cin >> p[i];
    }
    ll ans = 0;
    for(int  i = 1; i <= n; i++){
        if(abs(i-p[i]) != 0){
            ans = __gcd(ans, abs((p[i])- i));
        }
    }
    
    cout << ans << endl;
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solution();
    }
    return 0;
}