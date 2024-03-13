#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int>price(n);
    for(int i = 0; i < n; i++){
        cin >> price[i];
    }
    sort(price.begin(), price.end());
    int ans = 0;
    int curr = 0;
    if(price[0] > 0){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < m; i++){
        if(price[i] > 0){
            curr -= price[i];
        }
        else{
            curr += abs(price[i]);
        }
        
        ans = max(ans, (curr));
    }
    
    cout << abs(ans) << endl;
    return 0;
}
