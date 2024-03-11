#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll>v(n);
    for(int i = 0;i < n; i++){
        cin >> v[i];
    }
    if(n <= 2){
        cout << 0 <<endl;
        return 0;
    }
    else{
        sort(v.begin(), v.end());
        ll ans = v[n-2] - v[0];
        ans = min(ans,(v[n-1] - v[1]) );
        cout<<ans<<endl;
    }
    
}