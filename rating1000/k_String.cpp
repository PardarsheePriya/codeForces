#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;

void solve(){
   ll n;
   cin >> n;
   string s;
   cin >> s;
   string ans = "";
   map<char, int>st;
   for(int i = 0; i < s.size(); i++){
       st[s[i]]++;
   }
   for(auto it: st){
       if(it.second%n != 0){
           cout << "-1" << endl;
           return;
       }
       else{
           int times = it.second/n;
           while(times--){
            ans.push_back(it.first);  
           }
       }
   }
   
   string result = ans;
   while(--n){
       ans += result;
   }
   
   cout << ans << endl;
}
int main()
{
    solve();

    return 0;
}