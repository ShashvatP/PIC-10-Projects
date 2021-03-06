// Shashvat Patel
// UID: 705568668
// Discussion 1B


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    
    vector<int> vecone;
    int input;
    
       cout << "Enter first sequence (Q when done): ";
    
      while (cin >> input) {
          vecone.push_back(input);
      }
    sort(vecone.begin(), vecone.end());
    
    cin.clear();
    string discard;
    cin >> discard;
    
    vector<int> vectwo;
    int inptwo;
    
       cout << "Enter second sequence (Q when done): ";
    
      while (cin >> inptwo) {
          vectwo.push_back(inptwo);
      }
    sort(vectwo.begin(), vectwo.end());
    
    if (vecone.size() != vectwo.size()) {
        cout << "These are: Different" << endl;
    }
    
    else if (vecone == vectwo) {
        cout << "These are: Same" << endl;
    } else {
        cout << "These are: Different" << endl;
    }

    return 0;
}

