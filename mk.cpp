#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {
    cout << "This program converts from Miles to Kilometers and vice-versa";
    char conv;
    cout << "Are you converting from Miles to Kilometers, please enter \"m\" for miles or \"k\" for kilometers: ";
    cin >> conv;
    if (conv == 'm') {
        cout << "Please enter the number of miles to be converted: ";
        double mi {0};
        cin >> mi;
        double km = mi * 0.621371;
        cout << mi << " Miles is " << km << " Kilometers.\n";
    }
    else if (conv == 'k') {
        cout << "Please enter the number of kilometers to be converted: ";
        double km {0};
        cin >> km;
        double mi = km * 1.60934;
        cout << km << " Kilometers is " << mi << " Miles.\n";
    }
    else {
        cout << "Please re-run the program with a valid input\n";
    }
    return 0;
}