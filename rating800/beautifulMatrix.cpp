#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_set>

using namespace std;

int main() {
    vector<vector<int>>v;
    for(int i = 0; i < 5; i++){
        vector<int>temp;
        for(int j = 0; j < 5; j++){
            int el;
            cin >> el;
            temp.push_back(el);
        }
        v.push_back(temp);
    }
  
  int a = 2;
  int b = 2;
  int ans = 0;
  for(int i =0; i < 5; i++){
      for(int j = 0; j < 5; j++){
          if(v[i][j] == 1){
            ans = abs(i-a) + abs(j-b);  
            cout << ans << endl;
            return 0;
          }
      }
  }
  
}
