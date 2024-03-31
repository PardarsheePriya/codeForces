#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i <n; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(__gcd(v[i], v[j]) <= 2){
                cout << "YES" << endl;
                return;
            }
        }
    }
    
    cout << "NO" << endl;
    
}

int main()
{
    ll test;
    cin >> test;
    while (test--) 
    {
        solve();
    }
}
