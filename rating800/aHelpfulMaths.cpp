#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    if(s.size() == 1){
        cout << s << endl;
        return 0;
    }
    
    string a = "";
    
    for(char c: s){
        if(isdigit(c)){
            a += c;
        }
    }
    
    sort(a.begin(), a.end());
    int b = 0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            s[i] = a[b];
            b++;
        }
    }
    cout << s << endl;
    return 0;
}