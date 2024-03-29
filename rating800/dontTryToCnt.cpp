#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    string usin, making;
    cin >> usin >> making;
    int ans = 0;
    int times = 6;
    int flag = 0;
    while(times--){
        if(usin.find(making) != string :: npos){
            flag = 1;
            break;
        }
        usin += usin;
        ans++;
    }
    
    if(flag){
        cout << ans << endl;
    }
    else{
        cout << -1 << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}