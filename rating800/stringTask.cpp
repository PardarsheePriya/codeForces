#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    string s;
    cin >> s;
    string ans = "";
    int n = s.size();
    for(int i = 0; i < n; i++){
        char c = s[i];
        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'y' && c != 'Y'){
            ans += ".";
            ans += tolower(c);
            
        }
    }
    
    cout << ans << endl;
}
int main()
{
    solve();

    return 0;
}
