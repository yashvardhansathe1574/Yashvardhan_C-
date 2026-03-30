#include <iostream>
using namespace std;

int calc(int a) {
    return a * a;
}

int calc(int a, int b) {
    return a + b;
}
int calc(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num, a, b, c;

    cout << "Enter a number to find square: ";
    cin >> num;
    cout << "Square = " << calc(num) << endl;

    cout << "\nEnter two numbers for addition: ";
    cin >> a >> b;
    cout << "Sum (2 numbers) = " << calc(a, b) << endl;

    cout << "\nEnter three numbers for addition: ";
    cin >> a >> b >> c;
    cout << "Sum (3 numbers) = " << calc(a, b, c) << endl;

    return 0;
}
