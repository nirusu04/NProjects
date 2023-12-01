//Sampada Niroula
//9/13/2023
//CS1428 Lab
//Lab 2
//Netid-ymy17

//Description: this program will calculate the average number
//  of products sold by DELL company and save the values to a
//  file

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    string name;
    int branchId, week1, week2, week3;
    double average;

    ifstream fin;
    fin.open("Dell_sales_data.txt");

    ofstream fout;
    fout.open("averages.txt");

    if (!fin) {
        cout << "Could not open input file. Terminating program." << endl;
        return -1;
    }

    if (!fout) {
        cout << "Could not open output file. Terminating program." << endl;
        return -1;
    }

    fout << left;
    fout << setw(10) << "BID" << setw(13) << "PName" << "Average" << endl;

    while (fin >> branchId >> name >> week1 >> week2 >> week3) {
        average = static_cast<double>(week1 + week2 + week3) / 3.0;
        fout << setw(10) << branchId << setw(13) << name << fixed << setprecision(2) << average << endl;
    }

    cout << "Data written to averages.txt" << endl;

    fout.close();
    fin.close();

    return 0;
}
