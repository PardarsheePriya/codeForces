/******************************************************************************
Number Circle

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long int

using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    swap(v[n-1], v[n-2]);
    
    for(int i = 1; i < n -1; i++){
        if(v[i] >= v[i-1] + v[i+1]){
            cout << "NO" << endl;
            return;
        }
    }
    
    if(v[n-1] >= v[n-2] + v[0]){
        cout << "NO" << endl;
        return;
    }
    else if(v[0] >= v[1] + v[n-1]){
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
    for(auto it: v){
        cout << it << " ";
    }
    cout << endl;
}
int main()
{solve();
}