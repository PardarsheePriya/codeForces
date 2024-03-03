
#include <iostream>
#include <vector>
using  namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<string>>v;
    
    for(int i = 0; i < n; i++){
        vector<string>temp;
        for(int j = 0; j < 3; j++){
            string s;
            cin >> s;
            temp.push_back(s);
        }
        v.push_back(temp);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 1; j < 2; j++){
            int v1 = stoi(v[i][j]);
            int v2 = stoi(v[i][j+1]);
            if(v2 > v1 && v1 >= 2400){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    
    cout << "NO" << endl;
    return 0;
}