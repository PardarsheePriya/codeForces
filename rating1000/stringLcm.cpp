/******************************************************************************
lcm = n1*n2/gcd(n1, n2)

*******************************************************************************/
#include <iostream>
#include <cmath> 
#include <string>
#include <algorithm>
#include <iomanip>
#define ll long long int

using namespace std;


void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int n1, n2;
    n1 = s1.size();
    n2 = s2.size();
    int lcm = (n1*n2)/__gcd(n1, n2);
    
    string new1, new2;
    for(int i = 0; i < lcm/n1; i++){
        new1 += s1;
    }
    for(int i = 0; i < lcm/n2; i++){
        new2 += s2;
    }
    
    if(new2 == new1){
        cout << new1 << endl;
    }
    else{
        cout << -1 << endl;
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
