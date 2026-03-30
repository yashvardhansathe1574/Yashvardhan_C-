#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5, sub6;
    float total, percentage;

    cout << "Enter marks for 6 subjects:\n";
    cout << "Subject 1: ";
    cin >> sub1;
    cout << "Subject 2: ";
    cin >> sub2;
    cout << "Subject 3: ";
    cin >> sub3;
    cout << "Subject 4: ";
    cin >> sub4;
    cout << "Subject 5: ";
    cin >> sub5;
    cout << "Subject 6: ";
    cin >> sub6;
    total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
    percentage = total / 6;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
