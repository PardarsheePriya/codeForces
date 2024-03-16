#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <iomanip>
#include <cmath>
#include <climits>
 
#define ll long long
 
using namespace std;
void solve(){
    ll n, k;
    cin >> n >> k;
    vector<ll>v(2*n);
    for(int i = 0; i <2*n; i++){
        cin >> v[i];
    }
    
    //first half arr 
    unordered_set<ll>st;
    unordered_map<ll, ll>m1, m2;
    for(int i = 0; i < n; i++){
        st.insert(v[i]);
        m1[v[i]]++;
    }
    
    //2nd half
    vector<ll>spec;
    
    for(int i = n; i < 2*n; i++){
        //common elements in both halfves arr
        if(st.find(v[i]) != st.end()){
            spec.push_back(v[i]);
        }
        //2nd arr data
        m2[v[i]]++;
    }
    
    vector<ll>ans1;
    vector<ll>ans2;
    ll na = k;
    for(auto it: m1){
        if(it.second == 2 && na != 0){
            ans1.push_back(it.first);
            ans1.push_back(it.first);
            na--;
        }
    }
    na = k;
    for(auto it: m2){
        if(it.second == 2 && na != 0){
            ans2.push_back(it.first);
            ans2.push_back(it.first);
            na--;
        }
    }
    
    na = na*2;
    for (int i = 0; i < v.size(); i++)
    {
      if (na != 0)
      {
        ans1.push_back(spec[i]);
        ans2.push_back(spec[i]);
        na--;
      }
    }
    
    //print
    for(auto it: ans1){
        cout << it << " ";
    }
    cout << endl;
    
    //print
    for(auto it: ans2){
        cout << it << " ";
    }
    cout << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}