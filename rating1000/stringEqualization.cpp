#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <unordered_map>
#define ll long long
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    int n = s.length();
        int c = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(s[i] == t[j]){
                    c++;
                }
            }
        }
        if(c == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    


int main() {
    ll q;
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}

