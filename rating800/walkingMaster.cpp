#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll a, b, c, d;
    ll y;
    cin >> a >> b >> c >> d;
    if(d >= b){
        y = d-b;
        a += y;
        if(a < c){
            cout << -1 << endl;
        }
        else{
            y += (a-c);
            cout << y << endl;
        }
    }
    else{
        cout << -1 << endl;
    }
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
