#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;

bool isPrime(int a){
    if(a <= 1){
        return 0;
    }
    int sqrt_n = sqrt(a);
    for(int i = 2; i <= sqrt_n; i++){
        if(a%i == 0){
            return 0;
        }
    }
    
    return 1;
}
int main(){
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for(int i = n+1; i <= m; i++){
        if(isPrime(i)){
            ans = i;
            break;
        }
    }
    
    if(ans == m){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
    
}