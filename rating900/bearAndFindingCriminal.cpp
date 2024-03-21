#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#define ll long long
using namespace std;
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int i = m-1;
    int j = m-1;
    ll cnt = 0;
    while(i >= 0 && j < n){
        if(v[i] == 1 && v[j] == 1 && i == j){
            cnt += 1;
        }
        else if(v[i] == 1 && v[j] == 1 && i != j){
            cnt+=2;
        }
        i--;
        j++;
    }
    
    while(i >= 0){
        if(v[i] == 1){
            cnt++;
        }
        i--;
    }
    
    while(j < n){
        if(v[j] == 1){
            cnt++;
        }
        j++;
    }
    
    cout << cnt << endl;
}
    
int main(){
    solve();
}