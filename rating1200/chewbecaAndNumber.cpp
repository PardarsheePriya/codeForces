/******************************************************************************
invert: t - 9

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        if(i == 0 && c >= '5' && c < '9'){
            s[i] = '9' - c + '0';
        }
        else if(i > 0 && c >= '5'){
            s[i] = '9' - c + '0'; 
        }
    }
    
    cout << s << endl;
    
}
int main()
{
    solve();

    return 0;
}
