#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<ll> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<ll> a;
    for (int i = 0; i < n; i++) {
        if (i == 0 || b[i] == b[i - 1]) { 
            a.push_back(b[i]);
        } else if (b[i] < b[i - 1]) { 
            a.push_back(b[i]);
            a.push_back(b[i]);
        } else { 
            a.push_back(b[i]);
        }
    }
    
    cout << a.size() << endl;
    for (auto it : a) {
        cout << it << " ";
    }
    
    cout << endl;
}

int main() {
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
