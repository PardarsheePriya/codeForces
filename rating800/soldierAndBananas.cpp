#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    int cost, dollar, wants;
    cin >> cost >> dollar >> wants;
    int total = 0;
    for(int i = 1; i <= wants; i++){
        total = total + cost*i;
    }
    
    if(total <= dollar){
        cout << 0 << endl;
        return 0;
    }
    
    cout << total - dollar << endl;
    return 0;
}