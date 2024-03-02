#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int rotate = 0;
    char curr = 'a';
    
    for(int i = 0; i < s.size(); i++){
        int clockw = abs(curr-s[i]);
        int opp = 26-clockw;
        rotate += min(clockw, opp);
        curr = s[i];
    }
    
    cout << rotate << endl;
    
    return 0;
    
}
