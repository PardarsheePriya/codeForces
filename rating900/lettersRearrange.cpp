#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){
    int query;
    cin >> query;
    while(query--){
        string s;
        cin >> s;
        int n = s.size();
        bool pal = true;
        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-1 - i]){
                pal = false;
                break;
            }
        }
        
        if(pal == false){
            cout << s << endl;
        }
        else{
            string b = s;
            sort(b.begin(), b.end());
            if(s == b){
                cout << "-1" << endl;
            }
            else{
                cout << b << endl;
            }
        }
    }
    return 0;
}