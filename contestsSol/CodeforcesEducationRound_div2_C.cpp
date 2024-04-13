#include <iostream>
#include <string> // Added to use string type
#include <vector>
#include <set>
#include <algorithm>
#include <map>        // Map container
#include <queue>      // Queue container
#include <stack>      // Stack container
#include <cmath>      // Mathematical functions
#include <fstream>    // File input/output handling



#define ll long long int
#define INF 1000000000            // Represents infinity (adjust value as needed)
#define MOD 1000000007            // Modulo value for arithmetic operations
#define pb push_back             // Shortcut for vector push_back operation
#define mp make_pair             // Shortcut for creating a pair
#define all(x) (x).begin(), (x).end() // Shortcut for specifying a range
#define F first                 // Shortcut for accessing the first element of a pair
#define S second                // Shortcut for accessing the second element of a pair
#define sz(x) (int)(x).size()  // Returns the size of a container
#define gcd(a, b) __gcd(a, b)  // Computes the greatest common divisor of a and b


using namespace std;

void solu() {
    string str1, str2, extra1, extra2;
    cin >> str1 >> str2;
    
    int count = -1; // Declare count variable
    for(int i =0; i < str1.size(); i++){
        if(str1[i] == str2[i]){
            extra1.push_back(str1[i]);
            extra2.push_back(str2[i]);
        }
        else
        {
            extra1.push_back(str1[i]);
            extra2.push_back(str2[i]);
            count = i;
            break;
        }
        
    }
    
    //Special CASE PRINT
    if(count == -1){
        cout << extra1 << endl; // Changed s1 to extra1
        cout << extra2 << endl; // Changed s2 to extra2
    }
    else{
        for(int i = count+1; i < str1.size(); i++){
            if(str1[count] < str2[count]){
                extra1.push_back(max(str1[i], str2[i]));
                extra2.push_back(min(str1[i], str2[i]));
            }
            else{
                extra2.push_back(max(str1[i], str2[i]));
                extra1.push_back(min(str1[i], str2[i]));
            }
        }
        
        //Print
        cout << extra1 << endl;
        cout << extra2 << endl;
    }
}

int main() {
    ll test;
    cin >> test;
    while (test--) {
        solu();
    }
    return 0;
}
