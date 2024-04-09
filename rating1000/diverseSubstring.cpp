/******************************************************************************
Diverse Substring
*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int

using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n-1; i++){
        if(s[i] != s[i+1]){
            cout << "YES" << endl;
            cout << s[i] << s[i+1] << endl;
            return;
        }
    }
    
    cout << "NO" << endl;
}
int main()
{
    solve();
}