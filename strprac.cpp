#include<iostream>
#include<string>

using namespace std;

int main() {
    int num_of_words = 0;
    cout << "Enter a phrase to check for repeated words \n";
    string previous = " "; // previous word; initialized to “not a word”
    string current; // current word

    while (cin>>current) { // read a stream of words
        ++num_of_words;
        if (previous == current) // check if the word is the same as last
            cout << "Word Number " << num_of_words << " repeated word: " << current << '\n';
    previous = current;
    }
}