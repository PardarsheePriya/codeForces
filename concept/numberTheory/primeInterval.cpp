#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//prime Interval
bool isPrime_better(int n){
    if(n == 1){
        return true;
    }
    
    int sqr = sqrt(n);
    for(int i = 2; i <= sqr; i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}


int main(){
    int a, n;
    cout << "Enter two number to find prime number between them: ";
    cin >> a >> n;
    for(; a<= n; a++){
        if(isPrime_better(a)){
            cout << a << " ";
        }
    }
    return 0;
}