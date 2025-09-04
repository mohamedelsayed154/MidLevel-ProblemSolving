#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    string s;
  getline (cin , s);

  string result = "";
  
   for (char c : s) {
        if (!ispunct(c)) {
            result += c;  
        }
    }

    cout << "Original: " << s << endl;
    cout << "After removing punctuations: " << result << endl;
}
