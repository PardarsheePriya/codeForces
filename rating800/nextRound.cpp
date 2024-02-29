#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k; //size and place;
    vector<int>v;
    
    //creating vector
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    
    int minReq = v[k-1];
    int answer = 0;
    for(int i = 0; i < n; i++){
        if(v[i] >= minReq && v[i] > 0){
            answer++;
        }
    }
    
    cout << answer << endl;
    return 0;
}