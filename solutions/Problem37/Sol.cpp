/*
Problem#37
  */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter the String : ";
    getline(cin, s);

    int token;
    cout << "Token : ";
    cin >> token;

    vector<string> parts;
    int start = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            parts.push_back(s.substr(start, i - start));
            start = i + 1;
        }
    }
    parts.push_back(s.substr(start));

    cout << "\nSplitted parts:\n";
    for (int i = 0; i < token && i < parts.size(); i++) {
        cout << parts[i] << endl;
    }
}
