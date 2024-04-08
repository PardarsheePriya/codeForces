#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;

void solve(){
   ll pages;
   cin >> pages;
   vector<ll>v(7);
   for(int i = 0; i < 7; i++){
       cin >> v[i];
   }
   for(int i = 0; i < 7; i++){
       pages -= v[i];
       if(pages <= 0){
           cout << i+1 << endl;
           return;
       }
       
       if(pages > 0 && i == 6){
           i = -1;
       }
   }
   
}
int main()
{
    solve();

    return 0;
}
