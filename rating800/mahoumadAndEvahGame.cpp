#include <iostream>
#include <iomanip>
#include <vector>
#include <climits>
#include <algorithm>

#define ll long long int
using namespace std;

void solve(){
    ll num;
    cin >> num;
    if(num%2 == 0){
        cout << "Mahmoud" << endl;
    }
    else{
        cout << "Ehab" << endl;
    }
}
int main(){
    solve();
}