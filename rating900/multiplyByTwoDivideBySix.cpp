#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        if(n == 1){
            cout << ans << endl;
            continue;
        }
        
        if(n%3 != 0){
            cout << -1 << endl;
            continue;
        }
        
        while(n!=1){
            if(n%3 != 0){
                cout << -1 << endl;
                break;
            }
            if(n%6 == 0){
                n = n/6;
            }
            else{
                n = n*2;
            }
            ans++;
        }
        
        if(n == 1) cout << ans << '\n';
    }

    return 0;
}
