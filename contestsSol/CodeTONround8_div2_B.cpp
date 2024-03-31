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
    vector<ll>a_bessi(n);
    vector<ll>p_bessi(n);
    
    ll mex = n;
    for(int i = 0; i < n; i++){
        cin >> a_bessi[i];
    }
    
    for(int i = n-1; i >= 0; i--){
       if(a_bessi[i] > 0){
            p_bessi[i] = mex - a_bessi[i];
            mex = p_bessi[i];
       }
       else{
           p_bessi[i] = mex + abs(a_bessi[i]);
       }
    }
    
    for(auto it: p_bessi){
        cout << it << " ";
    }
    
    cout << nline;
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
