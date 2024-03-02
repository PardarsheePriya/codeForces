#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>>v;
    for(int i = 0; i < n; i++){
        vector<char>temp;
        for(int j = 0; j < m; j++){
            char el;
            cin >> el;
            temp.push_back(el);
        }
        v.push_back(temp);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] != 'B' && v[i][j] != 'W' && v[i][j] != 'G') {
                cout << "#Color" << endl;
                return 0;
            }
        }
    }
    
    cout << "#Black&White" << endl;
    return 0;
}
