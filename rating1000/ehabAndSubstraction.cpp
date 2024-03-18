#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#define ll long long

using namespace std;

//GOT TLE

// void solve(){
//     ll n, k;
//     cin >> n >> k;
//     vector<ll>v(n);
//     for(int i = 0; i < n; i++){
//         cin >> v[i];
//     }
    
//     //process
//     for(int i = 0; i < k; i++){
//         ll nonZeroMin = INT_MAX;
//         bool hasNonZero = false;
//         for(int j = 0; j < n; j++){
//             if(v[j] > 0 && v[j] < nonZeroMin){
//                 nonZeroMin = v[j];
//                 hasNonZero = true;
//             }
//         }
//         if(!hasNonZero){
//             cout << 0 << endl;
//         }
//         else{
//             cout << nonZeroMin << endl;
//         }
        
//         for(int j = 0; j < n; j++){
//             if(v[j] > 0){
//                 v[j] = v[j] - nonZeroMin;
//             }
//         }
        
//     }
    
    
    
// }

// optimal: Using SET 
void solve(){
    ll n, k;
    cin >> n >> k;
    set<ll>st;
    st.insert(0);
    for(int i = 0; i < n; i++){
        ll el;
        cin >> el;
        st.insert(el);
    }
    
    //process
    auto it = st.begin();
    for(ll i = 0; i < k; i++){
        if(next(it) == st.end()){
            cout << 0 << endl;
        }
        else{
            cout << *next(it) - *it << endl;
            it = next(it);
        }
    }
    
    
    
}

int main(){
    solve();
    return 0;
}