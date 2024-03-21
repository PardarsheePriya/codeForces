#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n, m;
    cin >> n >> m;
    unordered_map<string, string>mp;
    for(int i = 0; i < m; i++){
        string s1, s2;
        cin >> s1 >> s2;
        mp[s1] = s2;
    }
    
    vector<string>v(n);
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        v[i] = str;
    }
    
    
    for(auto it: v){
        auto i = mp.find(it);
        if(i != mp.end()){
            string a = i->first;
            string b = i->second;
            
            if(a.size() <= b.size()){
                cout << a << " ";
            }
            else{
                cout << b << " ";
            }
        }
    }
}

int main()
{
    solve();
    return 0;
}