#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>

#define ll long long
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>grany(n);
        for(int i = 0; i < n; i++){
            cin >> grany[i];
        }
        
        //process
        sort(grany.begin(), grany.end());
        int flag = 0;
        for(int i=n-1; i>=0; i--){
            if(grany[i] <= i+1){
                cout<<i+2<<endl;
                flag = 1;
                break;
            }
            else{
                continue;
            }
        }
        if(flag == 0){
            cout<<1<<endl;
        }
        
    }
    return 0;
    #include <algorithm>
}