/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define ll long long int

using namespace std;

void solu() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    set<ll> st;
    //input
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        st.insert(v[i]);
    }
    
    if (st.size() == 1) {
        cout << -1 << endl;
        return;
    }
    
    ll cnt = 0;
    ll res = n; 
    for (int i = 0; i < n; i++) {
        if (v[i] == v[0]) {
            cnt++;
        } else {
            res = min(res, cnt);
            cnt = 0;
        }
    }
    
    res = min(res, cnt);
    cout << res << endl;
}

int main() {
    ll test;
    cin >> test;
    while (test--) {
        solu();
    }
    return 0;
}
