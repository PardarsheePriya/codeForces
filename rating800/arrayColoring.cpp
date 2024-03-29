#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<ll>v(n);
    ll totalSum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        totalSum+=v[i];
    }
    
    ll curSum = 0;
    for(int i = 0; i < n; i++){
        curSum += v[i];
        totalSum -= v[i];
        if(curSum != 0 && curSum%2 == 1 && totalSum%2 == 1){
            cout << "YES" << endl;
            return;
        }
        else if(curSum != 0 && curSum%2 == 0 && totalSum%2 == 0){
            cout << "YES" << endl;
            return;
        }
        
    }
    
    cout << "NO" << endl;
}

int main() {
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
