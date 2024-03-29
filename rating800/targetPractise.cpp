#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
    vector<vector<char>>v(10, vector<char>(10));
    int score = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> v[i][j];
            if(i == 0 || j == 0 || i == 9 || j == 9){
                if(v[i][j] == 'X'){
                    score += 1;
                }
            }
            else if(i == 1 || j == 1 || i == 8 || j == 8){
                if(v[i][j] == 'X'){
                    score += 2;
                }
            }
            else if(i == 2 || j == 2 || i == 7 || j == 7){
                if(v[i][j] == 'X'){
                    score += 3;
                }
            }
            else if(i == 3 || j == 3 || i == 6 || j == 6){
                if(v[i][j] == 'X'){
                    score += 4;
                }
            }
            else if(i == 4 || j == 4|| i == 5 || j == 5){
                if(v[i][j] == 'X'){
                    score += 5;
                }
            }
        }
    }
    
    cout << score << endl;

}
int main(){
    int test;
    cin >> test;
    while(test--){
        solve();
    }
}