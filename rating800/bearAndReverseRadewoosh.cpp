#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, c;
    cin >> n >> c;
    
    vector<int>score;
    vector<int>times;
    //score
    for(int i =0; i < n; i++){
        int s;
        cin >> s;
        score.push_back(s);
    }
    //times
    for(int i = 0; i< n; i++){
        int t;
        cin >> t;
        times.push_back(t);
    }
    
    //process
    int a_score = 0, a_time = 0;
    int b_score = 0, b_time = 0;
    
    for(int i = 0; i < n; i++){
        a_time += times[i];
        a_score += max(0, score[i] - (c * a_time));
    }
    
    for(int i = n-1; i >= 0; i--){
        b_time += times[i];
        b_score += max(0, score[i] - (c * b_time));
    }
    
    if(a_score == b_score){
        cout << "Tie" << endl;
    }
    else if(a_score > b_score){
        cout << "Limak" << endl;
    }
    else{
        cout << "Radewoosh" << endl;
    }
    
    return 0;
}