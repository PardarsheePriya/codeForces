#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <queue>
#include <map>
#define ll long long

using namespace std;

void solve(){
    ll oriX = 0;
    ll oriY = 0;
    
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    ll curX = 0;
    ll curY = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'U'){
            curY++;
        }
        else if(s[i] == 'D'){
            curY--;
        }
        else if(s[i] == 'R'){
            curX++;
        }
        else if(s[i] == 'L'){
            curX--;
        }
    }
    
    ll a = abs(curX)+abs(curY);
    cout << n-a << endl;
}
int main(){
    solve();
    return 0;
}