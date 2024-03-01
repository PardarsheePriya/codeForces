#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    int n = str.size();

    // Find the last non-space character before the question mark
    char lastCharacter = ' ';
    for (int i = n - 2; i >= 0; i--) {
        if (str[i] != ' ') {
            lastCharacter = toupper(str[i]);
            break;
        }
    }

    // Check if the last character is a vowel or a consonant
    char answer = (lastCharacter == 'A' || lastCharacter == 'E' ||
                   lastCharacter == 'I' || lastCharacter == 'O' ||
                   lastCharacter == 'U' || lastCharacter == 'Y')
                      ? 'Y'
                      : 'N';

    // Output the answer
    cout << (answer == 'Y' ? "YES" : "NO") << endl;

    return 0;
}
