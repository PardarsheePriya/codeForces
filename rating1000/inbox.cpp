#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    
    for(int i  = 0; i < n; i++){
        cin >> v[i];
    }
    
    ll prev = -1;
    ll curr = 0;
    ll cnt = 0;
    for(int i = 0;i < n; i++){
        if(v[i] == 1 && curr == 0 && prev == -1){
            cnt++;
            curr = i;
            prev = curr;
        }
        else if(v[i] == 1){
            prev = curr;
            curr = i;
            if(curr - prev > 1){
                cnt += 2;
            }
            else{
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    solve();
    return 0;
}