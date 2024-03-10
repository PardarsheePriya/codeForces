#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string s;
        for(int i=0; i<b; i++){
            s.push_back(c[i]);
        }
        int k=0;
        while(n--){
            cout<<s[k];
            k++;
            if(k==b)
                k=0;
        }
        cout<<endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
