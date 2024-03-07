
#include <iostream>
#include <cmath>
#include <numeric>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    double n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
    }
    
    cout << fixed << setprecision(12) << sum/n << endl;
    
    return 0;
    
}
