/******************************************************************************
k - operation times
n - original number
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
#define ll long long int

using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    while(k--){
        if(n%10 == 0){
            n = n/10;
        }
        else{
            n--;
        }
    }
    
    cout << n << endl;
}
int main()
{
    solve();
}