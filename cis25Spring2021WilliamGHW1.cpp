#include <iostream>
using namespace std;

// Function Prototypes
void displayClassInfoWilliamG();
void displayDigitInfoWilliamG(int x);

// Application Driver
int main() {
    int option;
    int x;
    displayClassInfoWilliamG();
    do {
        cout << "\n*****************************************\n"
            "*              MENU - HW #1             *\n"
            "*  (1) Calling displayDigitInfoWilliamG *\n"
            "*  (2) Quit                             *\n"
            "*****************************************\n";
        cout << "Enter an integer for option + ENTER: ";
        cin >> option;
        cout << "\n";
        switch (option) {
        case 1:
            cout << "Enter an integer: ";
            cin >> x;
            cout << endl;
            cout << "Calling displayDigitInfoYourName() with argument of " << x << "\n\n";
            displayDigitInfoWilliamG(x);
            break;
        case 2:
            break;
        default:
            cout << "Wrong option!\n";
            break;
        }
    } while (option != 2);
    return 0;
}

// Function Definition
void displayClassInfoWilliamG() {
    cout << "CIS 25 - C++ Programming\n"
        "Laney College\n"
        "William Golovlev\n"
        "\nInformation --\n"
        "  Assignment:                       Algorithms Test\n"
        "  Implemented by:                   William Golovlev\n"
        "  Submitted Date:                   2021/2/1\n"
        "  Current Number of LEB available:  (ToBeExplained)\n"
        "  Allowed Number of LEB used:       (ToBeExplained)\n"
        "  Remaining Number of LEB:          (ToBeExplained)\n";
}

// Function Definition
void displayDigitInfoWilliamG(int x) {
    int counter = 0;
    int remainder;
    int max = 0;
    int maxct = 0;
    int digits = x;
    
    if (x == 0) {
        cout << "This is 0.\n";
        return;
    }
    cout << "The given argument of " << ((x > 0) ? " is a positive number\n" : " is a negative number\n\n");

    cout << "For this integral value of " << x << " --\n";
    if (x < 0) {
        x = -x;
    }
    while (digits) {
        digits /= 10;
        counter++;
    }
    cout << "  There is/are " << counter << " digit(s)\n\n";

    cout << "The digit(s), looking from LSD to MSD, is/are:\n";
    while (x > 0) {
        remainder = x % 10;
        cout << remainder << endl;
        if (remainder > max) {
            max = remainder;
            maxct = 1;
        }
        else if (max == remainder)
            maxct++;
        x /= 10;
        }
    cout << "\nFrom the above digit(s) -- \n"
        "  The largest digit is " << max << " and it is seen " << maxct << " time(s)\n" << endl;

}
