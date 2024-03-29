#include <iostream>
#include <vector>
#include <climits>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    ll mini = INT_MAX;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i <n-1; i++){
        mini = min(v[i+1] - v[i], mini);
    }
    
    if(mini < 0){
        cout << 0 << endl;
    }
    else{
        cout << mini/2 + 1 << endl;
    }
}

int main() {
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
