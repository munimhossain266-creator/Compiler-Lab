#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream inputFile("newText.txt");

    if (!inputFile) {
        cout << "Unable to open the file!" << endl;
        return 1;
    }

    string line;


    for ( ; getline(inputFile, line); ) {
        cout << line << endl;
    }

    inputFile.close();

    return 0;
}
