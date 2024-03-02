#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; 
    cin >> n;
    if(n == 1){
        cout << 0 << endl;
        return 0;
    }
    
    vector <int> v;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        int el; cin >> el;
        maxi = max(maxi, el);
        v.push_back(el);
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans + maxi - v[i];
    }
    
    cout << ans << endl;
    return 0;
}