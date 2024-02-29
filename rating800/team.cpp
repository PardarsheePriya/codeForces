#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    int cnt = 0;
    while(t--){
        int count = 0;
        vector<int>v;
        for(int i = 0; i < 3; i++){
            int ele;
            cin >> ele;
            v.push_back(ele);
        }
        
        for(int i = 0; i < 3; i++){
            if(v[i] == 1){
                count++;
            }
        }
        
        if(count > 1){
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}