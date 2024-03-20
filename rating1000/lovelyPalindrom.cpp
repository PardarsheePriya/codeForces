#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <climits>
#include <string>
#include <vector>
#define ll long long
using namespace std;
void solve(){
    string s;
    cin >> s;
    string s2 = s;
    reverse(s.begin(), s.end());
    cout << s2+s << endl;
}
    
int main(){
    solve();
}