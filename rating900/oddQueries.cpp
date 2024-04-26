/******************************************************************************
 
Odd Queries: https://codeforces.com/problemset/problem/1807/D

Explanation:
Take prefix sum to get sum of range (precomputation)
Then perform the query asked in question: newsum = originalSum - (old range sum) + (new range sum)
check this newSum is odd or even

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
void solution() {
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    long long total_sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        total_sum += v[i];
    }
    // prefix array
    vector<long long> prefix(n + 1);
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + v[i - 1];
    }

    // process
    for(int i = 0; i < q; i++) {
        int l, r, k;
        cin >> l >> r >> k;
        long long add = (r - l + 1) * k;
        long long sub = prefix[r] - prefix[l - 1];
        long long newSum = total_sum + add - sub;
        if(newSum % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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