#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    string username;
    cin >> username;
    unordered_set<char>s;
    for(int i = 0; i < username.size(); i++){
        s.insert(username[i]);
    }
    
    int a = s.size();
    if(a%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}