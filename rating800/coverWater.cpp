#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int cnt =  0;
    int maxi = 0;
    int emp = 0;
    
    for(int i = 0; i < n; i++){
        if(s[i] == '.'){
            cnt++;
            emp++;
        }
        if(s[i] == '#'){
            maxi = max(maxi, emp);
            emp = 0;
        }
    }
    
    maxi = max(maxi, emp);
    if(maxi > 2){
        cout << 2 << endl;
    }
    else{
        cout << cnt << endl;
    }
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}