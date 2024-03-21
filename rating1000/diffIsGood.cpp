#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#include <unordered_set>
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;
    string str;
    cin >> str;
    unordered_set<char>st;
    for(int i = 0; i < n; i++){
        st.insert(str[i]);
    }
    
    ll k = 26 - st.size();
    ll j = n - st.size();
    
    if(k < j){
        cout << -1 << endl;
    }
    else{
        cout << j << endl;
    }
}
    
int main(){
    solve();
}