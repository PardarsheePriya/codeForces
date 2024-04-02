/*
a[i] = type of drink
n = number of students
k = total type of drink
1 box contains 2 drinks of 1 type
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    map<int, int>m;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        m[v[i]]++;
    }
    
    int ans = 0;
    for(auto it: m){
        int num = it.second;
        if(num > 1){
            ans += num/2;
        }
    }
    int a;
    if(n%2 == 0){
        a = n/2;
    }
    else{
        a = n/2 + 1 ;
    }
    int total_happy_student = (ans*2) + (a - ans);
    cout << total_happy_student << endl;
}

int main(){
    solve();
}