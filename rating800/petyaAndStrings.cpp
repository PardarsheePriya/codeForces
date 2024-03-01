#include <iostream>
#include <string>

using namespace std;

int main(){
    string one;
    cin >> one;
    string two;
    cin >> two;
    
    for(char &c: one){
        c = tolower(c);
    }
    for(char &c: two){
        c = tolower(c);
    }
    
    for(int i = 0; i < one.size(); i++){
        if(one[i] < two[i]){
            cout << -1 << endl;
            return 0;
        }
        else if(one[i] > two[i]){
            cout << 1 << endl;
            return 0;
        }
    }
    
    cout << 0 << endl;
    return 0;
}