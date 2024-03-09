#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(){
    string s;
    cin >> s;
    vector<int>v;
    int conse = 0;
    for(auto c: s){
        if(c == '1'){
            conse++;
        }
        else{
            v.push_back(conse);
            conse = 0;
        }
    }
    
    if(conse > 0){
        v.push_back(conse);
    }
    
    sort(v.begin(), v.end());
    int ans = 0;
    int ni = v.size();
    for(int i = ni-1; i >=0; i-=2){
    ans += v[i];
    }

    
    cout << ans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){   
        solve();
    }
    
    return 0;
}