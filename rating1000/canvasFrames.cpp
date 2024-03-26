#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

#define pi 3.1415926536

using namespace std;

int main() {
   int n;
   cin >> n;
   unordered_map<int, int>mp;
   for(int i = 0; i < n; i++){
       int el;
       cin >> el;
       mp[el]++;
   }
   int ans = 0;
   for(auto it: mp){
       if(it.second >= 2){
           ans += it.second/2;
       }
   }
   
   cout << ans/2 << endl;
}
