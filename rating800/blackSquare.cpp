#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
   vector<int>v;
   for(int i = 0; i < 4; i++){
       int el;
       cin >> el;
       v.push_back(el);
   }
   
   string s;
   cin >> s;
   
   int cal = 0;
   for(auto ch: s){
       int idx = ch - '0' -1;
       cal += v[idx];
   }
   
   cout << cal << endl;
   return 0;
}
