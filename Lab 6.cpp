

#include <iostream>

int main() {
    char choice;
    int number = 0;

    do {
        number += 3;
        std::cout << "Updated value: " << number << std::endl;

        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> choice;

    } while (choice != 'y' && choice != 'Y');

    std::cout << "Loop ended. Final value: " << number << std::endl;

    return 0;
}
