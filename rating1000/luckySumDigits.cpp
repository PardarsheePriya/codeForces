/******************************************************************************


*******************************************************************************/
#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s = "";
    while(n > 0 && n%7 != 0){
        n = n-4;
        s.push_back('4');
    }
    while(n > 0 && n%7 == 0){
        n = n-7;
        s.push_back('7');
    }
    
    if(n == 0){
        cout << s << endl;
    }
    else{
        cout << -1 << endl;
    }
    
}
int main(){
    solve();
}