#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    str1 = str1 + str2;
    sort(str1.begin(), str1.end());
    
    string check;
    cin >> check;
    sort(check.begin(), check.end());
    if(str1.size() != check.size()){
        cout << "NO" << endl;
        return 0;
    }
    for(int i = 0; i < str1.size(); i++){
        if(str1[i] != check[i]){
            cout << "NO" << endl;
            return 0;
        }
        
    }
    
    cout << "YES" << endl;
    return 0;
}