/*
the given num should be divisible by 60

60 = 2 x 3 x 10
2 = last number should be even
3 = sum of digit should be divisible by 3
10 = last digit should be 0;
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define ll long long int
using namespace std;

void solve(){
    ll n;
    cin >> n;
    
    for(ll i = 0; i < n; i++){
        string s;
        cin >> s;
        bool zero = false;
        ll even = 0;
        ll sum = 0;
        for(int j = 0; j < s.size(); j++){
            ll x = s[j] - '0';
            if(x == 0){
                zero = true;
            }
            if(x%2 == 0){
                even++;
            }
            sum+=x;
        }
        
        if(sum%3 == 0 && even > 1 && zero == true){
            cout << "red" << endl;
        }
        else{
            cout << "cyan" << endl;
        }
    }
    
}

int main(){
    solve();
}