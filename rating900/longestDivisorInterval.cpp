/******************************************************************************
Longest Divisors Interval: https://codeforces.com/problemset/problem/1855/B

Explanation:

Here, I am iterating from 1 to n to find longest divisors Interval
if we observe, we can see any longest number must have divisor (like, 1, 2, 3...) until it is a prime number
so through loop we can find the longest number;
if the number is prime, it will be only divisible by 1 and not 2 or any other number, hence we get longest interval as 1
*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>
#include <iomanip>
#include <cmath>

#define ll long long int

using namespace std;
void solution(){
    ll num;
    cin >> num;
    ll cnt = 0;
    for(ll i = 1; i <= num; i++){
        if(num%i != 0){
            break;
        }
        cnt++;
    }
    cout << cnt << endl;
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solution();
    }
    return 0;
}