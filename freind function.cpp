#include <iostream>
using namespace std;

class Box {
private:
    float length, width, height;

public:
    void getData() {
        cout << "Enter length, width and height: ";
        cin >> length >> width >> height;
    }

    friend float calculateArea(Box b);
};
float calculateArea(Box b) {
    // Surface Area of Box = 2(lw + lh + wh)
    return 2 * (b.length * b.width + b.length * b.height + b.width * b.height);
}

int main() {
    Box b;
    b.getData();

    float area = calculateArea(b);

    cout << "Surface Area of Box = " << area << endl;

    return 0;
}
