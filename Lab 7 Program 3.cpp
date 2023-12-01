//Sampada Niroula
//10/18/2023
//CS1428 lab 18
//Lab 7
//Description: This program will print a sequence of even and odd numbers


#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function prototypes
int getUserChoice();
void findEvenNumbers();
void findOddNumbers();

int main() {
    int choice;

    cout << "What would you like to do?" << endl;
    cout << "1. Find even numbers 0 - N" << endl;
    cout << "2. Find odd numbers 0 - N" << endl;
    cout << "3. Quit program" << endl;

    do {
        choice = getUserChoice();

        switch (choice) {
            case 1:
                findEvenNumbers();
                break;
            case 2:
                findOddNumbers();
                break;
            case 3:
                cout << "Terminating program..." << endl;
                break;
            default:
                cout << "ERROR: Invalid choice. Select a valid menu item." << endl;
        }
    } while (choice != 3);

    return 0;
}

int getUserChoice() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

void findEvenNumbers() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Even numbers: ";
    for (int i = 0; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

void findOddNumbers() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Odd numbers: ";
    for (int i = 1; i <= N; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

