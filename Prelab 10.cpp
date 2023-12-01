// Sampada Niroula
// 11/08/2023
// Lab 10 Pre-Lab Assignment

#include <iostream>

using namespace std;

// Function prototype
void addValueToArray(int arr[], int size, int value);

int main()
{
    const int SIZE = 7;
    int array[SIZE] = {6, 8, 23, 41, 14, 50, 5};
    int addMe = 5;

    // Function call
    addValueToArray(array, SIZE, addMe);

    // Print the modified array
    for (int i = 0; i < SIZE; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function definition
void addValueToArray(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += value;
    }
}
