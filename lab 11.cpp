//Name -Sampada Niroula
//Date- 11/15/2023
//CS1428 Lab18
//Lab 11

//Description: this program will track a small library


#include <iostream>
#include <string>

using namespace std;


struct Book {
    string title;
    int publishingYear;
    int numPages;
    int numCopies;
};

int main() {

    const int SIZE = 3;
    Book books[SIZE];
    int total = 0,
        longestIndex = 0,
        oldestIndex = 0;

    for (int i = 0; i < SIZE; i++) {


        // TODO: Prompt/read book information

        cout << "Book #" << i + 1 << endl;
        cout << "Enter title: ";

        getline(cin, books[i].title);

        cout << "Enter publishing year: ";
        cin >> books[i].publishingYear;

        cout << "Enter number of pages: ";
        cin >> books[i].numPages;

        cout << "Enter number of copies: ";
        cin >> books[i].numCopies;

        // Adds quantity of the current book to the total number of books

        total += books[i].numCopies;

        // TODO: Find the index of the longest book

        if (books[i].numPages > books[longestIndex].numPages) {
            longestIndex = i;
        }

        // TODO: Find the index of the oldest book
        if (books[i].publishingYear < books[oldestIndex].publishingYear) {
            oldestIndex = i;
        }

        cin.ignore(); // Clear the input buffer
        cout << endl << endl;
    }



    cout << "Total number of books: " << total << endl;
    cout << "Oldest book: " << books[oldestIndex].title << endl;
    cout << "Longest book: " << books[longestIndex].title << endl;

    return 0;
}
