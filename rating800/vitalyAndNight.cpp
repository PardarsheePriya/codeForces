#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int col = 2*m;
    vector<vector<int>>v;
    for(int i = 0; i < n; i++){
        vector<int>temp;
        for(int j = 0; j < col; j++){
            int el;
            cin >> el;
            temp.push_back(el);
        }
        v.push_back(temp);
    }
    
    //process
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < col; j++){
            if(v[i][j] == 1 || v[i][j+1] == 1){
                cnt++;
            }
            j++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}