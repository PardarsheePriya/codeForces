#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
   deque<int>v;
   for(int i = 0; i < n; i++){
       int el;
       cin >> el;
       v.push_back(el);
   }
   
   int sereja = 0;
   int dima = 0;
   bool s_turn = true;
   while(!v.empty()){
       int card;
       if(v.front() > v.back()){
           card = v.front();
           v.pop_front();
       }
       else{
           card = v.back();
           v.pop_back();
       }
       
       if(s_turn){
           sereja += card;
           s_turn = false;
       }
       else{
           dima += card;
           s_turn = true;
       }
   }
   
   cout << sereja << " " << dima << endl;
   return 0;
  
}
