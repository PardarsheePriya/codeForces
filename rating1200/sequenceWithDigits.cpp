/******************************************************************************
Arthimetic Progression Series

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long int

using namespace std;
ll fun( ll num){
    ll res1=-1,res2=10;
    while(num>0){
        ll d=num%10;
        res1=max(res1,d);
        res2=min(res2,d);
        num/=10;
    }
    return res1*res2;
}
void solve(){
    ll a, k;
    cin >> a >> k;
    while(--k){
       ll nxt=a+fun(a);
       if(a==nxt) break;
       a=nxt;
    }
    cout<<a<<endl;
    
}
int main()
{
    ll test;
    cin >> test; 
    while(test--){
        solve();
    }
}