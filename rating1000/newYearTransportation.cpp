#include <iostream>
#include <vector>

using namespace std;

void solve(){
    int n, vis;
    cin >> n >> vis;
    
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int pos = 1;
    int next;
    while(pos <vis){ 
    
        next = v[pos-1] + pos;
        pos = next;
    }
    if(pos == vis){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
}
int main(){
    solve();
    return 0;
}
