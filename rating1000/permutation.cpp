#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <unordered_set>

#define pi 3.1415926536

using namespace std;

int main() {
   int n;
   cin >> n;
   vector<int>v(50001, 0);
   int ans = 0;
   for(int i = 1; i <= n; i++){
       int el;
       cin >> el;
       v[el]++;
   }
   
   for(int i = 1; i <= n; i++){
       if(v[i] == 0){
           ans++;
       }
   }
   
   cout << ans << endl;
   return 0;
}
