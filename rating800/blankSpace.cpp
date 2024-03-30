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
    ll maxi0 = 0;
    ll cur0 = 0;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        if(el == 0){
            cur0++;
        }
        else{
            cur0 = 0;
        }
        maxi0 = max(maxi0, cur0);
    }
    
    cout << maxi0 << endl;
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
