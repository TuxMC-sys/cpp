#include<iostream>


constexpr double kmmir = 1.60934;
constexpr double mikmr = 0.621371;
int main() {
    std::cout << "This program converts from Miles to Kilometers and vice-versa\n";
    char conv;
    std::cout << "Are you converting from Miles to Kilometers, please enter \"m\" for miles or \"k\" for kilometers: ";
    std::cin >> conv;
    if (conv == 'm') {
        std::cout << "Please enter the number of miles to be converted: ";
        double mi {0};
        std::cin >> mi;
        double km = mi * mikmr;
        std::cout << mi << " Miles is " << km << " Kilometers.\n";
    }
    else if (conv == 'k') {
        std::cout << "Please enter the number of kilometers to be converted: ";
        double km {0};
        std::cin >> km;
        double mi = km * kmmir;
        std::cout << km << " Kilometers is " << mi << " Miles.\n";
    }
    else {
        std::cout << "Please re-run the program with a valid input\n";
    }
    return 0;
}