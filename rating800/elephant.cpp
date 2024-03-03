#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n; cin >> n;
    if(n <= 5){
        cout << 1 << endl;
    }
    else{
        if(n%5 == 0){
            cout << n/5 << endl;
            return 0;
        }
        else{
            int s = (n/5);
            cout << s+1 << endl;
        }
    }
    
    return 0;
    
    
}