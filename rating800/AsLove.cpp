#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >>s;
    
    int n = s.size();
    int cnt = 0;
    for(int i  =0; i < n; i++){
        if(s[i] == 'a'){
            cnt++;
        }
    }
    
    if(cnt > n/2){
        cout << n << endl;
    }
    else{
        cout << 2 * cnt - 1 << endl;
    }
    return 0;
}