#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <unordered_set>

using namespace std;

unordered_set<string> keywords = {
    "int", "float", "double", "char", "return", "if", "else",
    "while", "for", "break", "continue", "class", "public", "private", "void"
};

bool isKeyword(const string &word) {
    return keywords.find(word) != keywords.end();
}

bool isOperator(const string &word) {
    return (word == "+" || word == "-" || word == "*" || word == "/" ||
            word == "=" || word == "==" || word == "!=");
}

bool isNumber(const string &word) {
    for (char ch : word) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return !word.empty();
}

bool isPunctuation(const string &word) {
    return (word == ";" || word == "," || word == "(" || word == ")" ||
            word == "{" || word == "}" || word == "[" || word == "]");
}

void tokenizeLine(const string &line, int lineNo) {

    cout << "Line " << lineNo << ":" << endl;

    stringstream ss(line);
    string token;

    while (ss >> token) {


        int len = token.size();
        string wordPart = "";
        string punct = "";

        if (len > 1 && ispunct(token[len - 1])) {
            wordPart = token.substr(0, len - 1);
            punct = token.substr(len - 1, 1);
        } else {
            wordPart = token;
        }

        if (!wordPart.empty()) {

            if (isKeyword(wordPart)) {
                cout << "Keyword: " << wordPart << endl;
            }
            else if (isOperator(wordPart)) {
                cout << "Operator: " << wordPart << endl;
            }
            else if (isNumber(wordPart)) {
                cout << "Number: " << wordPart << endl;
            }
            else {
                cout << "Identifier: " << wordPart << endl;
            }
        }

        if (!punct.empty() && isPunctuation(punct)) {
            cout << "Punctuation: " << punct << endl;
        }
    }

    cout << endl;
}

int main() {

    ifstream inputFile("newText.txt");

    if (!inputFile) {
        cout << "Unable to open the file!" << endl;
        return 1;
    }

    string line;
    int lineNo = 1;

    while (getline(inputFile, line)) {
        tokenizeLine(line, lineNo);
        lineNo++;
    }

    inputFile.close();

    return 0;
}
