#include <iostream>
using namespace std;

int main() {
    int n_size, jump;
    cin >> n_size >> jump;
    string s;
    cin >> s;
    int j = 0;
    int k = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'G') {
            j = i;
        }
        if(s[i] == 'T'){
            k = i;
        }
    }
    
    if(j > k){
        while (j >= 0) {
            if (s[j] == 'T') {
                cout << "YES" << endl;
                return 0;
            }
            if(s[j] == '#'){
                cout << "NO" << endl;
                return 0;
            }
            j = j - jump;
        }
    }
    else{
        while (j < s.size()) {
            if (s[j] == 'T') {
                cout << "YES" << endl;
                return 0;
            }
            if(s[j] == '#'){
                cout << "NO" << endl;
                return 0;
            }
            j = j + jump;
        }
    }

    cout << "NO" << endl;
    return 0;
}
