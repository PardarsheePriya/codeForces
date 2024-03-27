#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    
    
    vector<ll>v(m);
    for(int i = 0; i < m; i++){
        cin >> v[i];
    }
    if(m == 0){
        cout << "YES" << endl;
        return 0;
    }
    sort(v.begin(), v.end());
    
    if(v[0] == 1 || v[m-1] == n){
        cout << "NO" << endl;
        return 0;
    }
    
    
    
    for (int i = 0; i < m - 2; ++i)
        if (v[i] + 1 == v[i + 1] && v[i + 1] + 1 == v[i + 2])
        {
                cout << "NO" << endl;
                return 0;
        }
        
        cout << "YES" << endl;
    
    return 0;
}
