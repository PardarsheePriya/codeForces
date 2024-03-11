#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll x, i;
    vector<ll> v(n);
    vector<ll> odd;
    vector<ll> ev;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) {
            ev.push_back(v[i]);
        } else {
            odd.push_back(v[i]);
        }
    }

    sort(ev.begin(), ev.end());
    sort(odd.begin(), odd.end());
    
    ll s1 = ev.size();
    ll s2 = odd.size();
    
    if(s1 == s2 || abs(s1-s2) == 1){
        cout << 0 << endl;
    }
    else{
        ll sum = 0;

			if (s1 > s2)
			{
			  x = s1-s2-2;

				for (i=x; i>=0; i--)
				  sum += ev[i];
			}
			else
			{
				x = s2-s1-2;

				for (i=x; i>=0; i--)
				  sum += odd[i];
			}

			cout << sum;
    }
    odd.clear();
    ev.clear();

    return 0;
}
