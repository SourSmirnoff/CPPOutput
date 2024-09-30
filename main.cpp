#include <iostream>
using namespace std;

int main() {
    string firstName = "Charles";
    string lastName = "Thomas";
    string streetAddress = "3558 McDowell Street";
    string city = "Nashville";
    string zipCode = "37214";

    // Print
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    // Wait for user to press Enter
    cout << "\nPress Enter to close the window..." << endl;
    cin.get();

    return 0;
}