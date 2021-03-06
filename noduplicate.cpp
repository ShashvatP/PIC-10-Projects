// Shashvat Patel
// UID: 705568668
// Discussion 1B

#include <iostream>
#include <vector>

using namespace std;

int main () {
    
    vector<int> with_dup;
    vector<int> without_dup;
    
    int input;
    int count = 0;
    cout << "Enter numbers (Q when done): ";
    
    while (cin >> input) {
        with_dup.push_back(input);
    }
    
    for (int i = 0; i < with_dup.size(); i++) {
        for ( int j = 0; j < without_dup.size() ; j++ ) {
            if (with_dup[i] == without_dup[j]) {
                count++;
            }
        }
        if (count == 0) {
            without_dup.push_back(with_dup[i]);
            count = 0;
        }
        else {
            count = 0;
        }
    }
    
    cout << "No Duplicate: ";
    
    for (int i = 0; i < without_dup.size(); i++) {
        cout << without_dup[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}
    

        
        
        

