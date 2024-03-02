#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}
int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i < 1000; i++){
        int m = (n*i)+1;
        if(!isPrime(m)){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}