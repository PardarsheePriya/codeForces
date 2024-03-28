#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#define ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll> v(n);
    unordered_set<ll> st;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        st.insert(el);
        v[i] = el;
    }
    
    if(st.size() > 2){
        cout << "NO" << endl;
    }
    else if(st.size() == 1){
        cout << "YES" << endl;
    }
    else{
        sort(v.begin(), v.end());
        int cnt1 = 1;
        int cnt2 = 0;
        for(int i = 1; i < n; i++){
            if(v[i] == v[0]){
                cnt1++;
            }
            else{
                cnt2++;
            }
        }
        
        if(abs(cnt2 - cnt1) > 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" <<endl;
        }
    }
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
