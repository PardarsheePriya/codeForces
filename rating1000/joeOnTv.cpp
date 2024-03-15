#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define ll long long
using namespace std;


int main() {
    double n;
    cin >> n;
    
    double ans = 0.0;
    while(n > 0){
        ans += 1/n;
        n--;
    }
    
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
    
}

