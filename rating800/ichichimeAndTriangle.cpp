#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll a, b, c, d;
    //given sorted form
    cin >> a >> b >> c >> d;
    
    //finding output
    //to make triange, sum of two sides should be more than third side
    cout << b <<" " <<  c << " " << c << endl;
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}