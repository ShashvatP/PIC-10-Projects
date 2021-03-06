// Shashvat Patel
// UID: 705568668
// Discussion 1B

#include <iostream>
#include <cmath>

using namespace std;

int roman(string inp) {
    
    if (inp == "I") {
        return 1;
    }
    
    else if (inp == "V") {
        return 5;
    }
    
    else if (inp == "X") {
        return 10;
    }
    
    else if (inp == "L") {
        return 50;
    }
    
    else if (inp == "C") {
        return 100;
    }
    
    else if (inp == "D") {
        return 500;
    }
    
    else if (inp == "M") {
        return 1000;
    }
    
    return roman(inp);
}

int rom(string num) {

    int total = 0;

string inp = num;
    
    while (inp.length() != 0) {
        
        if (inp.length() == 1 || roman(inp.substr(0, 1)) >= roman(inp.substr(1, 1))) {
            
           total = total + roman(inp.substr(0, 1));
            
            inp = inp.substr(1, inp.length() - 1);
        }
                                  
        else {
            
            int difference = roman(inp.substr(1, 1)) - roman(inp.substr(0, 1));
            
            total = difference + total;
            
            inp = inp.substr(2, inp.length() - 1);
        
            }

    }
    return total;
}

int main () {
    
    string str;
    
    cout << "Enter Roman numeral: ";
    
    cin >> str;
    
    cout << "Number: " << rom(str) << endl;

return 0;
}

    
