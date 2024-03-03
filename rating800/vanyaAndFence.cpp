#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n_size;
    cin >> n_size;
    
    int minH;
    cin >> minH;
    
    vector<int>v;
    for(int i = 0; i < n_size; i++){
        int el;
        cin >> el;
        v.push_back(el);
    }
    
    //process
    int width = 0;
    for(int i = 0; i < n_size; i++){
        if(v[i] > minH){
            width+=2;
        }
        else{
            width+=1;
        }
    }
    
    cout << width << endl;
    return 0;
}