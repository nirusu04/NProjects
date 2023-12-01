//Name: Sampada Niroula

//Date: 11/01/2023 L18

// Lab 9 Pre-Lab Assignment


#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;  // size of array

    int numbers[SIZE];  // create an array of integers that will hold 5 integers.

    cout << "Please enter 5 integers: " << endl;

    // For loop takes 5 integers from the user and stores them in the array
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];  // take user's input and store it in the array.
    }

    // Write a for loop to print the array to the screen
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
