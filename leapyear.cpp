#include <iostream>
#include <string>

int main() {
    std::string input;
    int year;

    // Prompt user for input
    std::cout << "Enter a year: ";
    std::cin >> input;

    // Check if input is a four-digit number
    if (input.length() != 4 || !isdigit(input[0]) || !isdigit(input[1]) || !isdigit(input[2]) || !isdigit(input[3])) {
        std::cout << "Invalid input. Please enter a four-digit year." << std::endl;
        return 1; // Exit with error
    }

    // Convert string to integer
    year = std::stoi(input);

    // Determine if it's a leap year
    bool is_leap = false;

    if (year % 400 == 0) {
        is_leap = true;
    } else if (year % 100 == 0) {
        is_leap = false;
    } else if (year % 4 == 0) {
        is_leap = true;
    }

    // Output result
    if (is_leap) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
