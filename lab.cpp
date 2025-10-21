#include <iostream>
using namespace std;

int main() {
    string input;
    bool isNumber = true;

    cout << "Enter any input: ";
    cin >> input;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            isNumber = false;
            break;
        }
    }

    if (isNumber)
        cout << "This is a numeric constant." << endl;
    else
        cout << "This is not a numeric constant." << endl;

    return 0;
}


