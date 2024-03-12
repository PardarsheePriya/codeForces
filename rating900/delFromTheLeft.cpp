#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s1;
    string s2;
    cin >> s1 >> s2;
    
    int n1 = s1.size();
    int n2 = s2.size();
    int cnt = 0;
    int i = n1-1;
    int j = n2-1;
    while(i >= 0 && j >= 0){
        if(s1[i] == s2[j]){
            cnt++;
            i--;
            j--;
        }
        else{
            if(i == n1-1 || j == n2-1){
                cout << n1+n2 << endl;
                return 0;
            }
            cout << (n1+n2) - 2*cnt << endl;
            return 0;
        }
    }
    cout << (n1+n2) - 2*cnt << endl;
    return 0;
}