//Sampada Niroula
//NetID- ymy17
//Date- 10/18/2023

//Lab 7  Prelab Assignment


#include <iostream>
using namespace std;

// Function to display the welcome message
void displayWelcomeMessage() {
    cout << "Welcome to my fabulous payment calculator!" << endl
         << "This program will take a principal amount"
         <<" and a number of payments, and" << endl
         << "return the cost of each payment!" << endl
         << endl;
}

// Function to calculate the payment and return the result

double calculatePayment() {
    double principal, payment;
    int payments;

    cout << "Please enter a principal amount: ";
    cin >> principal;
    cout << "Please enter a number of payments: ";
    cin >> payments;

    // Calculate the payment

    payment = static_cast< double >((1.2 * principal) / payments);

    return payment;
}

int main() {
    // Call the function to display the welcome message
    displayWelcomeMessage();

    // Call the function to calculate the payment and
    // assign the result to 'payment'

    double payment = calculatePayment();

    // Display the calculated payment

    cout << "Each payment will cost: " << payment << endl;

    return 0;
}
