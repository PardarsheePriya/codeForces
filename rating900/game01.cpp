#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve(){
    string s;
    cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            cnt0++;
        }
        else{
            cnt1++;
        }
    }
    
    int a = min(cnt0, cnt1);
    if(a%2 == 0){
        cout << "NET" << endl;
    }
    else{
        cout << "DA" << endl;
    }
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}