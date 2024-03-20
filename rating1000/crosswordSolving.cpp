#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <iomanip>
#include <cmath>
#include <string>

#define ll long long

using namespace std;

void solve(){
    ll n, m, ans = 1000000000000;
    vector<int> vans;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    for (int i = 0; i <= m - n; i++)
    {
        string tmp = t.substr(i, n);
        int c = 0;
        vector<int> v;
        for (int l = 0; l < n; l++)
        {
            if (tmp[l] != s[l])
            {
                c++;
                v.push_back(l + 1);
            }
        }
        if (c < ans)
        {
            ans = c;
            vans = v;
        }
    }
    cout << ans << endl;
    for (auto itr : vans)
    {
        cout << itr << " ";
    }

}
int main(){
    solve();
}