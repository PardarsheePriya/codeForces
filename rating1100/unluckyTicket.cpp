#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <algorithm>

using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string l, r;
    l = s.substr(0, n);
    r = s.substr(n, n);
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    
    bool less = true;
    bool gret = true;
    for(int i = 0; i < n; i++){
        int dig1 = l[i] - '0';
        int dig2 = r[i] - '0';
        
        if(!(dig1 < dig2)){
            less = false;
        }
        
        if(!(dig1 > dig2)){
            gret = false;
        }
    }
    
    if(less || gret){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main(){
    solve();
    return 0;
}

