//Name-Sampada Niroula
//Netid- ymy17
//10/25/2023
//CS1428 Lab 18
//lab 8

#include <iostream>
using namespace std;

// Function Prototypes:

bool isValidnum(int);

bool isValidop(char);

int result(int, char);

int main()
{
    int n, sum;
    char op, cont;

    do {
        cout << "Enter a number [1 - 100]: ";
        cin >> n;

        while (!isValidnum(n))
            {
            cout << "ERROR: Number must be between 1 and 100." << endl
                 << "Enter a valid number [1- 100]: ";
            cin >> n;
        }

        cout << "Enter an operand [+, -, *]: ";
        cin >> op;

        while (!isValidop(op))
            {
            cout << "ERROR: Operand must be either +, - or *" << endl
                 << "Enter a valid operand [+, -, *]: ";
            cin >> op;
        }

        sum = result(n, op);

        switch (op) {
            case '+':
                cout << "The sum";
                break;
            case '-':
                cout << "The difference";
                break;
            case '*':
                cout << "The product";
                break;
        }
        cout << " of numbers from 1 to " << n << " is " << sum << endl;

        cout << "Do you want to continue (y / n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    return 0;
}

// Function Definitions:

bool isValidnum(int num) {
    return num >= 1 && num <= 100;
}

bool isValidop(char op) {
    return op == '+' || op == '-' || op == '*';
}

int result(int n, char op)
{
    int result = 0;
    if (op == '+') {
        for (int i = 1; i <= n; i++) {
            result += i;
        }
    } else if (op == '-') {
        for (int i = 1; i <= n; i++) {
            result -= i;
        }

    } else if (op == '*') {
        result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
    }
    return result;
}






