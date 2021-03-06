// Shashvat Patel
// UID: 705568668
// Discussion 1B


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    
    vector<int> with_dup;
    vector<int> without_dup;
    
    int input;
    int count = 0;
    cout << "Enter first sequence (Q when done): ";
    
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
            sort(without_dup.begin(), without_dup.end());
    }
    
    cin.clear();
    string discard;
    cin >> discard;
    
    vector<int> secwith_dup;
    vector<int> secwithout_dup;
    
    int secinp;
    int counter = 0;
    cout << "Enter second sequence (Q when done): ";
    
    while (cin >> secinp) {
        secwith_dup.push_back(secinp);
    }
    
    for (int i = 0; i < secwith_dup.size(); i++) {
        for ( int j = 0; j < secwithout_dup.size() ; j++ ) {
            if (secwith_dup[i] == secwithout_dup[j]) {
                counter++;
            }
        }
        if (counter == 0) {
            secwithout_dup.push_back(secwith_dup[i]);
            counter = 0;
        }
        else {
            counter = 0;
        }
            sort(secwithout_dup.begin(), secwithout_dup.end());
    }
    
    if (without_dup == secwithout_dup) {
        cout << "These are: Same" << endl;
    } else {
        cout << "These are: Different" << endl;
    }

    return 0;
}



