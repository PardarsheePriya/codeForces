#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long int

using namespace std;
void solu(){
    ll n;
    cin >> n;
    vector<ll>cards(n);
    map<ll, ll>m;
    //input
    for(int i = 0; i < n; i++){
        cin >> cards[i];
        m[cards[i]]++;
    }
    
    int cntPoint = 0;
    for(auto it: m){
        ll freq = it.second;
        if(freq == 2){
            cntPoint++;
        }
    }
    
    cout << cntPoint << endl;
    
}

int main(){
    ll test;
    cin >> test;
    while(test--){
        solu();
    }
    
    return 0;
}