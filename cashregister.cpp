// Shashvat Patel
// UID: 705568668
// Discussion 1B

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


using namespace std;

class CashRegister {
    public:
        void add_amount(double value);
        void get_total_price();
        void add_amount();
        void get_amount_count();

    private:
        int amount_count;
        double total_price;
};


void CashRegister::add_amount() {
        cout << "Enter item prices (Q when done): ";
        double value;
    while (cin >> value) {
        total_price += value;
        amount_count++;
    }
}

void CashRegister::get_amount_count() {
    cout << "Total items: " << amount_count << endl;
}

void CashRegister::get_total_price() {
    cout << "Total price in cents: " << total_price * 100 << endl;
}


int main () {
    CashRegister register1;
    register1.add_amount();
    register1.get_amount_count();
    register1.get_total_price();
    
return 0;
}

