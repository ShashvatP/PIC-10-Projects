// Shashvat Patel
// UID: 705568668
// Discussion 1B

#include <iostream>

using namespace std;

int return_inp (double inputs[], int CAPACITY) {
    
    int current = 0;
    cout << "Enter numbers (Q when done): ";
    bool more = true;
    double total = 0;
    
    while (more) {
        double num;
        cin >> num;
        if (cin.fail()) {
            more = false;
        } else if (current < CAPACITY) {
            inputs[current] = num;
            if (current % 2 == 0) {
                total = total + inputs[current];
            }
            else if (current % 2 != 0) {
                total = total - inputs[current];
            }
            current++;
        }
    }
    return total;
}

int main() {
    
    const int CAPACITY = 10;
    double arr[CAPACITY];
    int arr_value = return_inp(arr, CAPACITY);
    
    cout << "Alternating Sum: " << arr_value << endl;
    
    return 0;
}

