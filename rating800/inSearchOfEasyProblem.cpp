/******************************************************************************
In Search of an Easy Problem

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long int

using namespace std;
void solve(){
    ll n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(num == 1){
            cout << "HARD" << endl;
            return;
        }
    }
    
    cout << "EASY" << endl;
}
int main()
{
    solve();
}