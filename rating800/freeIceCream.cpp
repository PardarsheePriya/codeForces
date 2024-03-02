#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin >> n;
    
    long long int initial;
    cin >> initial;
    
    vector<pair<char, long long int>> v;

    for (int i = 0; i < n; ++i) {
        char sign;
        long long int value;
        cin >> sign >> value;
        v.push_back({sign, value});
    }

    long long int kid = 0;
    for(auto it: v){
        if(it.first == '+'){
            initial += it.second;
        }
        if(it.first == '-'){
            if(it.second <= initial){
                initial -= it.second;
            }
            else{
                kid++;
            }
        }
    }
    
    cout << initial << " " << kid << endl;
    
    
}