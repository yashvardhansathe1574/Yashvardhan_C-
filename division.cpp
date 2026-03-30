#include <iostream>
using namespace std;

int main() {
    float a, b, result;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (b != 0) {
        result = a / b;
        cout << "Division = " << result << endl;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
    }

    return 0;
}
