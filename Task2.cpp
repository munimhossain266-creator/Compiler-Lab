#include <iostream>
using namespace std;

int main() {

string input;

cout << "Enter the expression: ";
cin >> input;

 for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
            cout << "Operator: " << ch << endl;
        }

}
      return 0;
}
