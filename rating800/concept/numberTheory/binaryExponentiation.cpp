#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//Binary Exponentiation - a^n
//Brute force -- O(n)

void binExpo(int a, int n){
    if(n == 0){
        cout << 1 << endl;
        return;
    }
    if(n == 1){
        cout << a << endl;
        return;
    }
    
    int res = 1;
    for(int i = 1; i <= n; i++){
        res = res* a;
    }
    cout << res << endl;
    return;
}

//better soln -- O(log n)

void binExpo_better(int a, int n){
    int res = 1;
    while(n){
        if(n%2 == 1){
            res = res * a;
            n--;
        }
        else{
            a = a*a;
            n = n/2;
        }
    }
    
    cout << res << endl;
}

int main(){
    int a, n;
    cout << "Enter numbers to calculate a^b: ";
    cin >> a >> n;
    binExpo_better(a, n);
    return 0;
}