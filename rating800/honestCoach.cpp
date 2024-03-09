#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void solve(){
    int siz;
    cin >> siz;
    vector<int>v(siz);
    for(int i = 0; i < siz; i++){
        cin >> v[i];
    }
    int ans = INT_MAX;
    sort(v.begin(), v.end());
    for(int i = 1; i < siz; i++){
        ans = min(ans, v[i]-v[i-1]);
    }
    
    cout << ans << endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}