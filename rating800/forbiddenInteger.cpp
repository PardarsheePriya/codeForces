#include <iostream>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES\n";
        cout << n << nline;

        for (int i = 0; i < n; i++)
            cout << 1 << " ";
        cout << nline;
    }
    else
    {
        if (k >= 2 && n % 2 == 0)
        {
            cout << "YES\n";
            cout << n / 2 << nline;

            for (int i = 0; i < n / 2; i++)
                cout << 2 << " ";
            cout << nline;
        }
        else if (k >= 3)
        {
            cout << "YES\n";
            cout << n / 2 << nline << 3 << " ";
            for (int i = 1; i < n / 2; i++)
                cout << 2 << " ";
            cout << nline;
        }
        else
            cout << "NO\n";
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
