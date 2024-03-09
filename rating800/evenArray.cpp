#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void solve(){
    int siz;
    cin >> siz;
    vector<int>v(siz);
    int evenIndicesOddParity = 0, oddIndicesEvenParity = 0;
    for(int i = 0; i < siz; i++){
        cin >> v[i];
        if(i%2 != v[i] %2){
            if(i%2 == 0){
                evenIndicesOddParity++;
            }
            else{
                oddIndicesEvenParity++;
            }
        }
    }
    
    if(evenIndicesOddParity == oddIndicesEvenParity){
        cout << evenIndicesOddParity << endl;
    }
    else{
        cout << -1 << endl;
    }
    
}
int main(){
    int n;
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}