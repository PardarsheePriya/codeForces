/******************************************************************************
S = s1 + s2 
S = gcd*m + gcd*n = gcd(m+n), gcd > 1
m+n > 1

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long int

using namespace std;

void solve(){
    ll n;
    cin >> n;
    if(n <= 2){
        cout << "No" << endl;
        return;
    }
    
    cout << "Yes" << endl;
    //pattern
    cout << n-1 << " ";
    for(int i = 1; i <= n-1; i++){
        cout << i << " ";
    }
    
    cout << endl;
    cout<< 1 << " " << n << " ";
    
}
int main()
{solve();
}