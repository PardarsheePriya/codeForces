#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int n, k;
        cin >> n >> k;
        int cnt = 1;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        int l = 1;
        sort(v.begin(), v.end());
        for(int i = 0; i < n-1; i++){
            int dif = v[i+1]-v[i];
            if(dif <= k){
                cnt++;
            }
            else{
                cnt = 1;
            }
            
            l = max(l, cnt);
        }
        
        cout << n-l<< endl;
    }
    return 0;
}