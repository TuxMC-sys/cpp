#include<iostream>
#include<string>
using namespace std;
int main() {
    cout << "Please enter your first name and age\n";
    string first_name; // string variable
    double age = -1; // integer variable
    cin >> first_name; // read a string
    cin >> age; // read an integer
    age = age * 12;

    cout << "Hello, " << first_name << " (age in Months: " << age << ")\n";
}