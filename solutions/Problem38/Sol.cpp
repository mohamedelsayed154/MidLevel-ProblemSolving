/*
Problem#38
  */

#include <iostream>
#include <string>
using namespace std;

void TrimLeft(string s);
void TrimRight(string s);
void Trim(string s);

int main() {
    string s;
    cout << "Enter The String :";
    getline(cin, s);

    TrimLeft(s);
    TrimRight(s);
    Trim(s);
}

void TrimLeft(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            cout << "Trim Left :" << s.substr(i, s.size() - i) << endl;
            break;
        }
    }
    cout << endl;
}

void TrimRight(string s) {
    for (int i = s.size() - 1; i >= 0; i--) {   
        if (s[i] != ' ') {
            cout << "Trim Right :" << s.substr(0, i + 1) << endl;  
            break;
        }
    }
    cout << endl;
}

void Trim(string s) {
    cout << "Trim (removes all spaces) :";
    for (int a = 0; a < s.size(); a++) {
        if (s[a] != ' ') {
            cout << s[a];
        }
    }
    cout << endl;
}
