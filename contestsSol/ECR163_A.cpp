#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if(n == 1 || n%2 != 0){
        cout << "NO" << endl;
        return;
    }
    string ans = "";
    int i = 0;
    for(int i = 0; i < n/2; i++){
        if(i%2 == 1){
            ans += "AA";
        }
        else{
            ans += "BB";
        }
    }
    cout << "YES" << endl;
    cout << ans << endl;
    
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}