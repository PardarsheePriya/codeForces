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
    
    int count = 0;
    int best = v[0];
    int worst = v[0];
    
    for(int i = 0; i < n; i++){
        if(v[i] < worst){
            count++;
            worst = v[i];
        }
        if(v[i] > best){
            count++;
            best = v[i];
        }
    }
    
    cout << count << endl;
    return 0;
}