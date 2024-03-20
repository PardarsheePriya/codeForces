#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <iomanip>
#include <cmath>
#include <string>

#define ll long long

using namespace std;

void solve(){
    ll n;
    cin >> n;
    string s = "aabb";
    int ptr = 0;
    for(int i = 0; i < n; i++){
        cout << s[ptr];
        ptr++;
        if(ptr == 4){
            ptr = 0;
        }
    }
    

}
int main(){
    solve();
}