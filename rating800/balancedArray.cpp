#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll siz;
    cin >> siz;
    ll sum1 = 0;
    ll sum2 = 0;
    if(siz%4 != 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        for(int i = 2; i <= siz; i++){
            cout << i << " ";
            sum1 += i;
            i++;
        }
        for(int i = 1; i < siz - 2; i++){
            cout << i << " ";
            sum2 += i;
            i++;
        }
        cout << sum1 - sum2;
        cout << endl;
    }
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}