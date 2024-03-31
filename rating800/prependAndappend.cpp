#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0; int j = n-1;
    ll cnt = 0;
    while(i < j){
        if((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')){
            cnt += 2;
        }
        else{
            break;
        }
        i++;
        j--;
    }
    
    cout << n-cnt << endl;
    
}

int main()
{
    ll test;
    cin >> test;
    while (test--) 
    {
        solve();
    }
}
