#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n, m;
    cin >> n >> m;
    ll loc = 1;
    ll ans = 0;
    for(int i = 0; i < m; i++){
        ll num;
        cin >> num;
        
        if(num >= loc){
            ans += (num - loc);
        }
        else{
            ans += n - (loc-num);
        }
        loc = num;
    }
    cout << ans << endl;
}