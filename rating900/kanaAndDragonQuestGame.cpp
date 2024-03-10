#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

void solve(){
    int total;
    int abso, light;
    cin >> total >> abso >> light;
    if(total > light*10){
        while(abso > 0){
        total = round(total/2) + 10;
        abso--;
    }
    
    while(light > 0){
        total = total - 10;
        light--;
    }
    if(total > 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    }
    else{
        cout << "YES" << endl;
    }
    
    
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}