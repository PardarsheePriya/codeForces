#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(){
    int a1, b1;
    cin >> a1 >> b1;
    int a2, b2;
    cin >> a2 >> b2;
    int a = min(a1, b1);
    int b = min(a2, b2);
    int x = max(a1, b1);
    int y = max(a2, b2);
    if(x == y){
        if(a+b == x){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}