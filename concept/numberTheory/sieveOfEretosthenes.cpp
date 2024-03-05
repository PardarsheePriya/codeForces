#include <iostream>
#include <cmath>

using namespace std;

//Sieve of Eretosthenes
//Best Solution: O(nlog(logn)) - preprocess
//Finding Answer: O(1)
//Space Complexity: (n)

int is_prime[10000001];

void sieve(){
    int maxN = 10000000;
    for(int i = 1; i <= maxN; i++){
        is_prime[i] = 1;
        
    }
    //marking 0 and 1 as non prime
    is_prime[0] = is_prime[1] = 0;
        
        //traversing till sqrt(n)
        for(int i = 2; i*i <= maxN; i++){
            if(is_prime[i]){
                for(int j = i*i; j <= maxN; j+=i){
                    is_prime[j] = 0;
                }
            }
        }
    
}

int main(){
    int n;
    cout << "Enter a number to check it is Prime:";
    cin >> n;
    sieve();
    if(is_prime[n] == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}