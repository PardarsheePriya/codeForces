#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#define pi 3.1415926536

using namespace std;

int main() {
   string s;
   cin >> s;
   int n = s.size();
   int four = 0;
   int seven = 0;
   int fs = 0;
   
   for(int i =0; i < n; i++){
        if(s[i] == '4'){
           four++;
       }
       else if(s[i] == '7'){
           seven++;
       }
       else if(s[i] == '4' && s[i+1] == '7' && i < n){
           fs++;
       }
   }
   
   
   int maxi = max(four, max(seven, fs));
   
   if(maxi == 0){
       cout << -1 << endl;
       return 0;
   }
   
   if(four == seven){
       cout << 4 << endl;
   }
   else if(maxi == four){
       cout << 4 << endl;
   }
   else if(maxi == seven){
       cout << 7 << endl;
   }
   else if(maxi == fs){
       cout << 47 << endl;
   }
   
   return 0;
}
