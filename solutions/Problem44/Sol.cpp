/*
Problem#44
  */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter the String : ";
    getline(cin, s);

    cout << "The Original String : " << s << endl;

    for (int i = 0; i < s.size(); i++) {
        if (!((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) && s[i] != ' ') {
            s.erase(i, 1);
            i--;
        }
    }

    cout << "Punctuations Removed : " << s << endl;
}
