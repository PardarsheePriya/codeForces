#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>>mapp;
    vector<int>rowSum(n, 0);
    vector<int>colSum(m, 0);
    
    //creating map
    for(int i = 0; i < n; i++){
        vector<char>temp(m, '.');
        for(int j = 0; j < m; j++){
            char ele;
            cin >> ele;
            temp[j] = ele;
        }
        mapp.push_back(temp);
    }
    
    //checking *
    for(int i = 0; i < n; i++){
        for(int j = 0; j <m; j++){
            if(mapp[i][j] == '*'){
                rowSum[i]++;
                colSum[j]++;
            }
        }
    }
    
    //finding target
    for(int i = 0; i < n; i++){
        for(int j = 0; j <m; j++){
            if(mapp[i][j] == '.' && (rowSum[i] > 0 && colSum[j] > 0)){
                cout << i+1 << " " << j+1 << endl;
                return 0;
            }
        }
    }
    
    return 0;
}