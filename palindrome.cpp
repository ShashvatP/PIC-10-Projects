// Shashvat Patel
// UID: 705568668
// Discussion 1B
 
#include <iostream>
#include <string>

using namespace std;

string reverse(string inp) {
    if (inp.length() == 2) {
        return inp.substr(1, 1) + inp.substr(0, 1);
    }
    
    string flash = inp.substr(0, inp.length() - 1);
    
    return inp.substr(inp.length() - 1, 1) + reverse(flash);
        
}

int main() {
    
    string name;
    
    cout << "Enter word: ";
    
    cin >> name;
    
    if (reverse(name) == name) {
        
        cout << "This is: A palindrome" << endl;
    }
    
    else {
        
        cout << "This is: Not a palindrome" << endl;
        
    }
 
    return 0;
}
