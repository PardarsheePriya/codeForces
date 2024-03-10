#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define  ll long long

using namespace std;

void solve(){
    ll n, m = 0, a;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>a;
        if(i == 0){
            cout<<a<<" ";
            m = a;
        }
        else{
            cout<<a+m<<" ";
            m = max(m,(a+m));
        }
    }
    cout<<endl;
    
}

int main(){
    solve();

    return 0;
}
