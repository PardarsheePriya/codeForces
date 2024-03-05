#include <iostream>
#include <cmath>

using namespace std;


//Naive - Brute Force - O(n)
bool isPrime(int n){
    if(n == 1){
        return false;
    }
    
    for(int i= 2; i < n ; i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}

// Better Solution - O(sqrt(n))
bool isPrime_better(int n){
    if(n == 1){
        return true;
    }
    
    it sqr = sqrt(n);
    for(int i = 2; i <= sqr; i++){
        if(n%i == 0){
            return false;
        }
    }
    
    return true;
}

int main(){
    int n;
    cin >> n;
    cout << "Enter a number to check prime: ";
    cin >> n;
    
    if(isPrime(n)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}