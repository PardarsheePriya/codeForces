/******************************************************************************
Drazil = 0, 0
Varda = a, b

*******************************************************************************/
#include <iostream>
#include <cmath> 
#include <string>
#define ll long long int

using namespace std;


void solve() {
    ll a, b;
    cin >> a >> b;
    ll steps;
    cin >> steps;
    if(a == 0 && b == 0 && steps%2 == 0){
        cout << "YES" << endl;
        return;
    }
    
    if(abs(a)+ abs(b) == steps){
        cout << "YES" << endl;
    }
    else if(abs(a)+ abs(b) < steps){
        ll extra = (abs(a)+abs(b)) - steps;
        if(extra%2 == 0){
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

int main() {
    solve();
    return 0;
}
