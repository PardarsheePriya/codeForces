#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>a;
    vector<int>b;
    
    //input
    for(int i = 0; i < n; i++){
        int a1;
        cin >> a1;
        int b1;
        cin >> b1;
        a.push_back(a1);
        b.push_back(b1);
    }
    
    //process
    int curr = 0;
    int maxi = 0;
    for(int i = 0; i < n; i++){
        curr = curr - a[i]+b[i];
        maxi = max(curr, maxi);
    }
    
    cout << maxi << endl;
    return 0;
}