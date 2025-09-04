/*
Problem#42
  */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    string s = "Welcome to USA , USA is a Great Country";
    string to_find = "USA";
    string replace_with = "Egypt";

   
    size_t start_pos = 0;

    cout << "Original String : " << s << endl;

    
    while ((start_pos = s.find(to_find, start_pos)) != string::npos) {

       
        s.replace(start_pos, to_find.length(), replace_with);

        
        start_pos += replace_with.length();
    }
    cout << endl << endl;
    cout << "String After Replace : " << s << endl;

    
}
