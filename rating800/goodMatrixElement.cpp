#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //creating mapp
    vector<vector<int>>v;
    for(int i = 0; i < n; i++){
        vector<int>temp;
        for(int j = 0; j < n; j++){
            int ele;
            cin >> ele;
            temp.push_back(ele);
        }
        v.push_back(temp);
    }
    
    int sumOfGood = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j || (n-1 - i == j) || (j == (n-1)/2) || (i == (n-1)/2)){
                sumOfGood += v[i][j];
            }
        }
    }
    cout << sumOfGood << endl;
    return 0;
}