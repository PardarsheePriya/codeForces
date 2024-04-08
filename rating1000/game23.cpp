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
   ll m;
   cin >> m;
   if(n == m){
       cout << 0 << endl;
       return;
   }
   else if(n > m || m%n != 0){
       cout << -1 << endl;
       return;
   }
   else{
       int d = m/n;
       int cnt = 0;
       while(d%2 == 0){
           d = d/2;
           cnt++;
       }
       while(d%3 == 0){
           d = d/3;
           cnt++;
       }
       
       if(d!= 1){
           cout << -1 << endl;
       }
       else{
           cout << cnt << endl;
       }
   }
}
int main()
{
    solve();

    return 0;
}
