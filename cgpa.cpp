#include<iostream>
#include <vector>
int main() {
    std::cout << "This program is used to calculate GPA. You may add 0.5 to each classes grade point for honor's and 1 for AP/college. \n";
    std::cout << "Please type your letter grades as a number (4 for A, 3 for B, 2 for C, 1 for D, 0 for F), ";
    std::cout << "press enter after each number and type 6 to indicate you have entered all grades.\n";
    std::cout << "Please note, if you enter a letter, symbol or word, the program will not work. If you do this, press Ctrl+C. \n";
    std::vector<double> grades {};
    double grade = 0;
    double c_grade = 0;
    while (grade != 6){
        std::cin >> grade;
        if (grade != 6) {
            grades.insert(grades.begin()+grades.size(), grade);
        }
    } 
    for (double x : grades) {
        c_grade += x; 
    }
    double gpa = c_grade / grades.size();
    std::cout << "Your GPA is " << gpa << ".\n";
}