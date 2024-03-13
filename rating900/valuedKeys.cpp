#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    string x, y;
    cin >> x;
    cin >> y;
    int n = x.size();
    string ans = "";
    for(int i = 0; i < n; i++){
        if(x[i] < y[i]){
            cout << "-1" << endl;
            return 0;
        }
        else if(x[i] == y[i]){
            if(x[i] == 'z'){
                ans += 'z';
            }
            else{
                ans += x[i] + 1;
            }
        }
        else{
            ans += y[i];
        }
    }
    cout << ans << endl;
    return 0;
    
}s