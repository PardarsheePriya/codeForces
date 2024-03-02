#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int word_n, c;
    cin >> word_n >> c;
    vector <int>v;
    stack<int>st;
    for(int i = 0; i < word_n; i++){
        int el;
        cin >> el;
        v.push_back(el);
    }
    
    st.push(v[0]);
    for(int i = 1; i < word_n; i++){
        if(v[i]-st.top() > c){
            while(!st.empty()){
                st.pop();
            }
        }
        st.push(v[i]);
    }
    
    cout << st.size() << endl;
    return 0;
}