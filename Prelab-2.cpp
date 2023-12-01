// Sampada Niroula
// ymy17
// cs1428 L18 Date-9/13/2023

// PreLab 2 Assignment

// Write a program that copies the data in the

// prelab input file to an output file "121_gigawatts"

// so that it is formatted the same in both files.

// Additionally add 60 to the year when you rewrite

// it to the output file to help Marty Mcfly get back to

// his proper time.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Declare variables to store data from the input file
    string firstName;
    string lastName;
    int year;

    // Declare input file stream variable and open the input file
    ifstream fin;
    fin.open("prelab_input (1).txt");

    // Check if the input file was opened successfully
    if (!fin) {
        cout << "ERROR - File failed to open. Make sure that the input file and this file are in the same directory." << endl;
        return -1;
    }

    // Declare output file stream variable and open the output file
    ofstream fout;
    fout.open("121_gigawatts.txt");

    // Check if the output file was opened successfully
    if (!fout) {
        cout << "ERROR - Output file failed to open." << endl;
        return -1;
    }

    // Read the first name, last name, and year from the input file
    fin >> firstName >> lastName >> year;

    // Increment the year by 60
    year += 60;

    // Write the modified name and year to the output file
    fout << firstName << " " << lastName << " " << year << endl;

    // Close the input and output files
    fin.close();
    fout.close();

    return 0; // The program finished successfully
}
