#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    int y = 0;
    int answer = 0;
    string s;
    cin >> s;
    for(int i = 0; i < n-1; i++){
        if(s[i] == 'U'){
            y++;
            
        }
        else{
            x++;
        }
        
        if(x == y &&(s[i] == s[i+1])){
            answer++;
        }
    }
    cout << answer << endl;
}