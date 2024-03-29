#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin >> n;
    ll sum = 0;
    for(int i = 0; i < n-1; i++){
        ll num;
        cin >> num;
        sum+= num;
    }
    
    cout << sum*-1 << endl;

}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}