#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int opp, day;
    cin >> opp >> day;
    
    vector<string>v;
    for(int i = 0; i < day; i++){
        string temp;
        for(int j = 0; j < opp; j++){
            char el;
            cin >> el;
            temp.push_back(el);
        }
        v.push_back(temp);
    }
    
    vector<int>answer;
    for(int i = 0; i < day; i++){
        int curr = 0;
        for(int j = 0; j < opp; j++){
            if(v[i][j] == '0'){
                curr++;
            }
        }
        if(curr > 0){
            answer.push_back(1);
        }
        else{
            answer.push_back(0);
        }
    }
    
    int cnt = 0;
    int curr = 0;
    for(int i = 0; i < answer.size(); i++){
        if(answer[i] == 1){
            curr++;
        }
        else{
            curr = 0;
        }
        
        cnt = max(cnt, curr);
    }
    
    cout <<cnt << endl;
}
