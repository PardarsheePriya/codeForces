#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    for(ll row = -n; row <= n; row++){
        int spaces = abs(row)*2;
        for(int i = 0; i < spaces; i++){
            cout << " ";
        }
        int max = n- abs(row);
        for(int i = 0; i < max; i++){
            cout << i << " ";
        }
        
        for(int i = max; i > 0; i--){
            cout << i << " ";
        }
        
        cout <<0 << endl;
    }
}
int main()
{
    solve();

    return 0;
}
