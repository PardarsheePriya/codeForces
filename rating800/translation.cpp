#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    
    int n = s1.size();
    string ans = "";
    
    for(int i = n-1; i >= n/2; i--){
        ans += s1[i];
    }
    
    for(int i = (n/2)-1; i >= 0; i--){
        ans += s1[i];
    }
    
    if(s2 == ans){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}