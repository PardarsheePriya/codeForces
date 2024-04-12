/******************************************************************************
Chemistry
Count for the odd occureneces of characters

*******************************************************************************/
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int>m;
    for(int i = 0; i < n; i++){
        m[s[i]]++;
    }
    int cntOdd = 0;
    for(auto it: m){
        int freq = it.second;
        if(freq%2 == 1){
            cntOdd++;
        }
    }
    
    if(k < cntOdd-1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    
}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}