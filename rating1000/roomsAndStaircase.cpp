/******************************************************************************
Rooms And Staircase
*******************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = -1;
    int r = -1;
    for(int i = 0; i <n ;i++){
        if(s[i] == '1'){
            l = i+1;
            break;
        }
    }
    
    for(int i = n-1; i >= 0; i--){
        if(s[i] == '1'){
            r = i+1;
            break;
        }
    }
    
    int ans = n;
    if(l != -1){
        int k = 2*(r-l+1);
        k += 2*max(l-1, n-r);
        ans = max(ans, k);
    }
    
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