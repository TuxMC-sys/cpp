#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "Please enter your first name: ";
	string first_name;
	cin >> first_name;
	cout << "Dear, " << first_name;
	cout << "\nHow are you, personally I am fine?\n";
	string friend_name;
	cout << "Tell me the name of a friend: ";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately? Please answer with t or f: ";
	char seen_friend;
	cin >> seen_friend;
	if (seen_friend == 'f') {
		cout << "You need to talk to " << friend_name << " more!\n";
	}
	if (seen_friend == 't') {
		char friend_gender;
		cout << "Is your friend male, female or neither. Please put m for male, f for female, or n for neither: ";
		cin >> friend_gender;
		if (friend_gender == 'm') {
			cout << "Tell him I said hi!\n";
		}
		else if (friend_gender == 'f') {
			cout << "Tell her I said hi!\n";
		}
		else {
			cout << "Tell them I said hi!\n";
		}
	}
	return 0;
}