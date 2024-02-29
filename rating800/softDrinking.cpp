#include <iostream>

using namespace std;
int main(){
    int total_friend;
    cin >> total_friend;
    int soft_drink;
    cin >> soft_drink;
    int per_litre;
    cin >> per_litre;
    int no_of_limes;
    cin >> no_of_limes;
    int no_of_pieces;
    cin >> no_of_pieces;
    int total_salt;
    cin >> total_salt;
    
    int nl;
    cin >> nl;
    int np;
    cin >> np;
    
    int drink = (soft_drink*per_litre)/nl;
    int limes = (no_of_limes*no_of_pieces);
    int salt = total_salt/np;
    
    int mini = min(drink, min(limes, salt));
    cout << mini/total_friend<< endl;
    return 0;
}