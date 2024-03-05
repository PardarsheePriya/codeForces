#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//Prime Factorization
//Brute Force -- O(log n) avg case -- O(n) Worst Case

void primeFactorization(int n){
    for(int i = 2; i <= n; i++){
        if(n%i == 0){
            int cnt = 0;
            while(n%i == 0){
                cnt++;
                n = n/i;
            }
            
            cout << i << "^" << cnt << endl;
        }
    }
}

//Better Approach -- O(sqrt(n))
void primeFactorization_better(int n){
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++){
        if(n%i == 0){
            int cnt = 0;
            while(n%i == 0){
                cnt++;
                n = n/i;
            }
            cout << i << "^" << cnt << endl;
        }
    }
    
    if(n > 1){
        cout << n << "^" << 1 << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number to find it's prime factorization:";
    cin >> n;
    if(n == 1){
        cout << n << endl;
        return 0;
    }
    else{
        primeFactorization_better(n);
    }
    
    return 0;
}