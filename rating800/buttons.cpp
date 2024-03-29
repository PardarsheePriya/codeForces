#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    
    if(a > b){
        cout << "First" << endl;
    }
    else if(a == b){
        if(c%2 == 1){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
    else{
        cout << "Second" << endl;
    }
}

int main() {
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
