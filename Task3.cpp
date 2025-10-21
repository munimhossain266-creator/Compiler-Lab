#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    bool isComment = false;

    for (int i = 0; i < input.length() - 1; i++) {
        if (input[i] == '/' && input[i + 1] == '/') {
            isComment = true;
            cout << "Commented part: ";
            for (int j = i + 2; j < input.length(); j++) {
                cout << input[j];
            }
            cout << endl;
            break;
        }
    }

    if (!isComment) {
        cout << "There is no comment here." << endl;
    }

    return 0;
}
