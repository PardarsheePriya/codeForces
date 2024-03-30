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

    if (!(n & 1))
        cout << "YES" << endl;
    else if (n % k == 0)
        cout << "YES" << endl;
    else if ((n - k) % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
