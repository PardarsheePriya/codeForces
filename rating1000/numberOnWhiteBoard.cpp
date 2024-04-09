/******************************************************************************
Number of White Board
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int

using namespace std;

void solve(){
    ll n;
    cin >> n;
    vector<ll>v;
    for(int i = 1; i <= n; i++){
        v.push_back(i);
        
    }
        vector<ll>res;
        while(v.size() > 1){
            ll s = v.size();
            ll sum = v[s-1]+v[s-2];
            res.push_back(v[s-1]);
            res.push_back(v[s-2]);
            v.pop_back();
            v.pop_back();
            if(sum%2 == 1){
                v.push_back(sum/2+1);
            }
            else{
                v.push_back(sum/2);
            }
        }
        cout << v.back() << endl;
        for(int i = 0; i < res.size(); i+=2){
            cout << res[i] << " " << res[i+1] <<endl;
        }
    }


int main()
{
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}