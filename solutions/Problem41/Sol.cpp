/*
Problem#41
  */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cout << "Enter the String: ";
    getline(cin, s);

    vector<string> Reverse;
    string word = "";

    // Store the words
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (!word.empty()) {
                Reverse.push_back(word);
                word = "";
            }
        }
        else {
            word += s[i];
        }
    }

    // Don't forget the last word
    if (!word.empty()) {
        Reverse.push_back(word);
    }

    cout << "String After Reversing Words: ";
    for (int x = Reverse.size() - 1; x >= 0; x--) {
        cout << Reverse[x] << " ";
    }

    cout << endl;
}
