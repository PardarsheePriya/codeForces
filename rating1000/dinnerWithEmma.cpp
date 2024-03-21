#include<bits/stdc++.h>
using namespace std;

void solve(){
   long long a,j,i,n,m,cost,min;
   cin >> n >> m;
   vector<long long>v;
        for(i=0;i<n;i++){
                min=100000000000;
            for(j=0;j<m;j++){
                cin>>cost;
            if(min>cost)
                min=cost;
            }
           v.push_back(min);
        }
        cost=0;
       for(i=0;i<v.size();i++){
            cost = max(cost, v[i]);
       }
       cout<<cost<<endl;
    }

int main()
{
    solve();
    return 0;
}