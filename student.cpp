// Shashvat Patel
// UID: 705568668
// Discussion 1B

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>


using namespace std;

class Student {
    public:
        void get_name();
        void add_quiz(int score);
        void get_total_score();
        void get_average_score();
        void add_quiz();

    private:
        int quiz_count;
        double total_score;
        double average_score;
};

void Student::get_name() {
    string name;
    cout << "Enter name: ";
    cin >> name;
}

void Student::add_quiz() {
        cout << "Enter quiz scores (Q when done): ";
        int score;
    while (cin >> score) {
        total_score += score;
        quiz_count++;
    }
}

void Student::get_total_score() {
    cout << "Total score: " << total_score << endl;
}

void Student:: get_average_score() {
    average_score = total_score / quiz_count;
    cout << "Average score: " << average_score << endl;
}

int main () {
    Student student1;
    student1.get_name();
    student1.add_quiz();
    student1.get_total_score();
    student1.get_average_score();
return 0;
}

