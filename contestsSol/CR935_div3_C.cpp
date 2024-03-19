#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <climits>

#define ll long long
using namespace std;
void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll left0=0;
    ll left1=0;
    ll right0=0;
    ll right1=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            right0++;
        }
        else
        {
            right1++;
        }

    }

    int ans=-1;
    int res=INT_MAX;
    if((n/2)+(n%2)<=right1)
    {
        res=n;
        ans=0;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            right0--;
            left0++;
        }
        else
        {
            right1--;
            left1++;
        }

        ll leftC=left0+left1;
        ll rightC=right0+right1;

        if((leftC/2)+(leftC%2)<=left0 && (rightC/2)+(rightC%2)<=right1)
        {
            int answer=abs(rightC-leftC);
            if(answer<res)
            {
                res=answer;
                ans=i+1;
                }
            }
        }
        cout<<ans<<endl;
}
int main(){
    int test;
    cin>> test;
    while(test--){
        solve();
    }
}