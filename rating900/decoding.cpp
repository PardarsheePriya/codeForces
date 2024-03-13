#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans; // Initialize ans with n spaces

    // Process
    
    for(int i = n-2; i>= 0; i--){
        ans += s[i];
        i--;
    }
    
    if(n%2 == 0){
        for(int i = 1; i < n; i++){
            ans += s[i];
            i++;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            ans+= s[i];
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}
