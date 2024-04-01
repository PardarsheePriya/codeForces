#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll row, col;
    cin >> row >> col;
    
    ll ans = 0;
    for(int i = 0; i < row; i++){
        ans += col/2;
    }
    
    if(col%2 == 0){
        cout << ans << endl;
        return;
    }
    else{
        if(row%2 == 0){
        ans += row/2;
    }
    else{
        ans += row/2;
        ans++;
    }
    }
    
    cout << ans << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}