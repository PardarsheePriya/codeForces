#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        //process
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        
        
    }
    return 0;
}