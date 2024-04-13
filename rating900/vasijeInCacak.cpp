/******************************************************************************
find lower bound and upper bound sum
and check if x is present in that range

*******************************************************************************/
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

#define ll long long int
using namespace std;

//TLE on case -3
// void solve(){
//     ll n, k, x;
    
//     cin >> n >> k >> x;
//     if(n == k){
//         ll sum = n*(n+1)/2;
//         if(x == sum){
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
//         return;
//     }
//     ll lowerBoundSum = 0;
//     for(ll i = 1; i <= k; i++){
//         lowerBoundSum+=i;
//     }
//     ll upperBoundSum = 0;
//     for(int i = n; i >= n - k + 1; i--){
//         upperBoundSum += i;
//     }
    
//     if(x >= lowerBoundSum && x <= upperBoundSum){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
//     }
    
// }

// Optimized solution

void solve(){

}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}