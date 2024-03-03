#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    unordered_set<char> st;
    for(char c: s){
        if(isalpha(c)){
            st.insert(c);
        }
    }

    cout << st.size() << endl;

    return 0;
}
