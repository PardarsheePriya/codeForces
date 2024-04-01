#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll size, sum;
    cin >> size >> sum;
    if(size == 1){
        cout << 0 << endl;
    }
    else if(size == 2){
        cout << sum << endl;
    }
    else{
        cout << sum*2 << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}