#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    
    
    
    if(k == n){
        for(int i = 1; i <= n; i++){
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    else if(k == 1){
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    else{
        cout << -1 << endl;
    }
    
    
}

int main()
{
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
}
