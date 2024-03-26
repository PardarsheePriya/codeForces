#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    int ans = 0;
    int curr =  0;
    int four = 0;
    int three = 0;
    int two = 0;
    int one = 0;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        if(el == 4){
            four++;
        }
        else if(el == 3){
            three++;
        }
        else if(el == 2){
            two++;
        }
        else if(el == 1){
            one++;
        }
    }
    
    ans += four;
    ans += two/2;
    ans += three;
    one -= min(three, one);
    if(two & 1){
        one -= min(2, one);
        ans++;
    }
    
    ans += (one+3)/4;
    cout << ans << endl;
}
int main(){
    solve();
    return 0;
}

