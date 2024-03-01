#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int upp = 0;
    int low = 0;
    for(auto ch: s){
        if(islower(ch)){
            low++;
        }
        if(isupper(ch)){
            upp++;
        }
    }
    
    if(upp > low){
        for(int i = 0; i< s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(int i = 0; i< s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }
    
    cout << s << endl;
    return 0;
}