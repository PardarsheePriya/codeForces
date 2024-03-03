#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
   vector<int>v;
   for(int i = 0; i < n; i++){
       int el;
       cin >> el;
       v.push_back(el);
   }
   
   int sum = 0;
   int answer = 0;
   for(int i =0; i < n; i++){
       if(v[i] == -1 && sum == 0){
           answer++;
       }
       else{
           sum += v[i];
       }
   }
   
   cout << answer << endl;
   return 0;
  
}
