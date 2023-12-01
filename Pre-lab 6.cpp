//Sampada Niroula
//L18
//10/11/2023

// Finish the following program which prints alphabets  upto the user's

//letter inclusively using a While Loop.

#include <iostream>

using namespace std;

int main()
{
    char letter;
    char counter = 'a'; // Initialize the variable

    // User enters a letter
    cout << "Enter a lowercase letter before z to print the alphabet up to: " << endl;
    cin >> letter;

    // Check for invalid user input
    if (letter < 'a' || letter > 'z')
    {
        cout << "Invalid Input" << endl;
        return -1; // Terminate the program
    }

    // Use a while loop to print the alphabets
    while (counter <= letter)
    {
        cout << counter << ' ';
        counter++; // Increment the counter variable
    }

    cout << endl;

    return 0;
}
