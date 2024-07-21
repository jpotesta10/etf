#include <iostream>
#include <cmath> // For the pow function

int main() {
    double principal, rate, time, compoundings_per_year;

    // Get the input from the user
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;
    std::cout << "Enter the annual interest rate (in %): ";
    std::cin >> rate;
    std::cout << "Enter the number of years: ";
    std::cin >> time;
    std::cout << "Enter the number of times interest is compounded per year: ";
    std::cin >> compoundings_per_year;

    // Convert the annual interest rate from percentage to decimal
    rate /= 100;

    // Calculate the future value
    double amount = principal * std::pow(1 + rate / compoundings_per_year, compoundings_per_year * time);

    // Output the result
    std::cout << "The amount of money accumulated after " << time << " years is: $" << amount << std::endl;

    return 0;
}
