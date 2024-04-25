//Create menu driven program for Pizza Shop.And display total amount
#include <iostream>
using namespace std;

int main() {
    int choice;
    double totalAmount = 0.0;

    cout << "Welcome to Pizza Shop!" << endl;
    cout << "Menu:" << endl;
    cout << "1. Margherita Pizza - $10.00" << endl;
    cout << "2. Pepperoni Pizza - $12.00" << endl;
    cout << "3. Vegetarian Pizza - $11.00" << endl;
    cout << "4. Hawaiian Pizza - $13.00" << endl;
    cout << "5. Exit" << endl;

    do {
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                totalAmount += 10.00;
                cout << "Margherita Pizza added to cart." << endl;
                break;
            case 2:
                totalAmount += 12.00;
                cout << "Pepperoni Pizza added to cart." << endl;
                break;
            case 3:
                totalAmount += 11.00;
                cout << "Vegetarian Pizza added to cart." << endl;
                break;
            case 4:
                totalAmount += 13.00;
                cout << "Hawaiian Pizza added to cart." << endl;
                break;
            case 5:
                cout << "Thank you for your order!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a number from 1 to 5." << endl;
        }
    } while (choice != 5);

    cout << "Total amount to be paid: $" << totalAmount << endl;

    return 0;
}
