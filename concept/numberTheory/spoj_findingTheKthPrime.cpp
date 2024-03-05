#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//Sieve of Eretosthenes
//Best Solution: O(nlog(logn)) - preprocess
//Finding Answer: O(1)
//Space Complexity: (n)

bool is_prime[90000001];        //initialized by false
vector<int>prime;
void sieve(){
    int maxN = 90000000;
    
    //marking 0 and 1 as non prime
    is_prime[0] = is_prime[1] = true;
        
        //traversing till sqrt(n)
        for(int i = 2; i*i <= maxN; i++){
            if(!is_prime[i]){       //isprimt
                for(int j = i*i; j <= maxN; j+=i){
                    is_prime[j] = true;
                }
            }
        }
    
    //insertin list of prime number
    for(int i = 2; i <= maxN; i++){
        if(!is_prime[i]){
            prime.push_back(i);
        }
    }

}

int main(){
    int query, n;
    cin >> query;
    sieve();
    while(query--){
        cin >> n;
        cout << prime[n-1] << endl;
    }
    
    return 0;
}