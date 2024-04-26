/******************************************************************************
Make it zero: https://codeforces.com/problemset/problem/1869/A

Explanation:
when array is even,then we can 1 to n values and make the xor 0
then xor of all 0s become 0 hence 2 operation required

whereas for odd size of array, 1 to n xor will give us the value x
therefore, we need to take first 2 to n (even size) to make the element 0
then we can take 1 to 2 to handle that 1 element which was left
in this way, total of 4 operation it takes

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
    ll n;   //size of array
    cin >> n;
    vector<ll>v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    //process
    
    //if size is even 
    if(n%2 == 0){
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
    }
    // when size is odd
    else{
        cout << 4 << endl;
        cout << 1 << " " << n << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
    }
}
int main(){
    ll test;
    cin >> test;
    while(test--){
        solution();
    }
    return 0;
}