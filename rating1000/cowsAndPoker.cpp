#include <iostream>
#include <string>
#define ll long long

using namespace std;

int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    int alin = 0;
    int fold = 0;
    int in = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'I'){
            in++;
        }
        else if(s[i] == 'A'){
            alin++;
        }
        else{
            fold++;
        }
    }
    
    if(in == 1){
        cout << 1 << endl;
    }
    else if(in == 0){
        cout << alin << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}