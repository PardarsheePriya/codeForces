#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    int evCnt = 0;
    int odCnt = 0;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i]%2 == 0){
            evCnt++;
        }
        else{
            odCnt++;
        }
        sum+=v[i];
    }
    
    if(sum%2 == 1){
        cout << "YES" << endl;
        return;
    }
    if(evCnt >= 1 && odCnt >= 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}