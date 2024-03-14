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
        int siz = 2*n;
        vector<int>v(siz);
        for(int i = 0; i < siz; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << v[n]-v[n-1] << endl;
        
        
        
    }
    return 0;
}