#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long int

using namespace std;
void solu(){
    ll k, q;
    cin >> k >> q;
    vector<ll>v(k);
    for(int i = 0; i < k; i++){
        cin >> v[i];
    }
    vector<ll>vq(q);
    for(int i = 0; i < q; i++){
        cin >> vq[i];
    }
    
    int mini = v[0];
    for(int i = 0; i <q; i++){
        if(vq[i] < mini){
            cout << vq[i] << " ";
        }
        else{
            cout << mini-1 << " ";
        }
    }
    
    cout << endl;
}

int main(){
    ll test;
    cin >> test;
    while(test--){
        solu();
    }
    
    return 0;
}