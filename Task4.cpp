#include <iostream>
#include <string>
using namespace std;

bool isLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (input.empty()) {
        cout << "Invalid Identifier! (Empty string)" << endl;
        return 0;
    }

    if (!(isLetter(input[0]) || input[0] == '_')) {
        cout << "Invalid Identifier! (First character must be a letter or underscore)" << endl;
        return 0;
    }

    for (int i = 1; i < input.length(); i++) {
        if (!(isLetter(input[i]) || isDigit(input[i]) || input[i] == '_')) {
            cout << "Invalid Identifier! (Contains invalid character)" << endl;
            return 0;
        }
    }

    cout << "Valid Identifier!" << endl;
    return 0;
}
