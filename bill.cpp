#include <iostream>
using namespace std;

int main() {
    string customerName;
    int days;
    float roomChargePerDay, foodCharge, totalRoomCharge, tax, totalBill;

    cout << "===== Hotel Billing System =====" << endl;

    cout << "Enter Customer Name: ";
    getline(cin, customerName);

    cout << "Enter Number of Days Stayed: ";
    cin >> days;

    cout << "Enter Room Charge Per Day: ";
    cin >> roomChargePerDay;

    cout << "Enter Food Charges: ";
    cin >> foodCharge;

    
    totalRoomCharge = days * roomChargePerDay;
    float subtotal = totalRoomCharge + foodCharge;

    tax = subtotal * 0.1; 
    totalBill = subtotal + tax;

    return 0;
}
