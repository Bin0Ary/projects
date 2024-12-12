#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
	string message{};
	string encrpyt{};
	string decrypt{};
	char answer{};
	do {
	cout << "Do you want to encrypt (E), decrypt (D) or Quit (Q):  ";
	cin >> answer;
	cout << endl;
	answer = toupper(answer);
	std::cin.ignore();
	if(answer == 'D' || answer == 'E'){
	cout << "Enter your secret message: " << endl;
	getline(cin, message);
	switch (answer) {
	case 'E':
	    for (size_t i{ 0 }; i < message.length(); i++) {
		    char letter = message.at(i);
	      	int letter_value = int(letter);
	     	letter_value++;
	    	encrpyt.push_back(char(letter_value));
	}

     	cout << "Your mesage: " << message << endl;
    	cout << "Encrypted message: " << encrpyt << endl;

	    break;
	case 'D':
		for (size_t i{ 0 }; i < message.length(); i++) {
			char letter = message.at(i);
			int letter_value = int(letter);
			letter_value--;
			decrypt.push_back(char(letter_value));
		}
		cout << "Your mesage: " << message << endl;
		cout << "Decrypted message: " << decrypt << endl;
		break;
	default: cout << "";
	}
	}
	} while (answer != 'Q');
	cout << "Quitting.........." << endl;
}