#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll x, y, z;
    cin >> x >> y >> z;
    if(x > y){
        swap(x, y);
    }
    if(x > z){
        swap(x, z);
    }
    if(y > z){
        swap(y, z);
    }
    
    if(y != z){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << x << " " << x << " " << z << endl;
    }
    
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}