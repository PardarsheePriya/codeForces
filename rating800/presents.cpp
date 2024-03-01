#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
        
    }
    vector<int>ans(n, 0);
    
    for(int i = 0; i < n; i++){
        ans[v[i] - 1] = i+1;
    }
    
    //print
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    return 0;
    
    
}