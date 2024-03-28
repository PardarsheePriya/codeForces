#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
    ll a, b, c;
    cin >> a >> b >> c;
    
    if(a < b && b < c){
        cout << "STAIR" << endl;
    }
    else if(a < b && b > c){
        cout << "PEAK" << endl;
    }
    else{
        cout << "NONE" << endl;
    }
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solve();
    }
}