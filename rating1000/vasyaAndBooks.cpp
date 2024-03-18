#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
#include <iomanip>
#include <set>
#include <queue>
#define ll long long

using namespace std;

//Got TLE
// void solve(){
//     ll n;
//     cin >> n;
//     vector<ll>shelf(n);
//     vector<ll>bag(n);
//     //input
//     queue<ll>st;
//     for(int i = 0; i < n; i++){
//         cin >> shelf[i];
//         st.push(shelf[i]);
//     }
//     for(int i = 0; i <n; i++){
//         cin >> bag[i];
//     }
    
    
//     //process
//     vector<ll>ans;
//     for(int i = 0; i < n; i++){
//         ll cnt = 0;
//         if(bag[i] > 0 && !st.empty()){
//             while(st.front() != bag[i]){
//                 int el = st.front();
//                 auto it = find(bag.begin(), bag.end(), el);
//                 *it = 0;
//                 st.pop();
//                 cnt++;
//             }
//             if(bag[i] == st.front()){
//                 cnt++;
//                 st.pop();
//                 ans.push_back(cnt);
//             }
            
//         }
//         else{
//             ans.push_back(0);
//         }
//     }
    
//     for(int i = 0; i < n; i++){
//         cout << ans[i] << " ";
//     }
    
    
// }

//Optimizated Code

int main(){
    solve();
    return 0;
}