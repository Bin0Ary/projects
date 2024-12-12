#include <iostream>
#include "prototype.h"
#include "functions.h"
using namespace std;
// Main
int main() {
	char unit;
	cout << "Welcome to the temperture calculator!" << endl;
	do {
		cout << "\nEnter the temperture: ";
		int temperture;
		cin >> temperture;
		cout << "Enter the unit (C) (F) (K) or quit (Q): ";
		cin >> unit;
		unit = toupper(unit);
		switch (unit) {
		case 'C':
			cout << celsius(temperture);
			break;
		case 'F':
			cout << fahrenheit(temperture);
			break;
		case 'K':
			cout << kelvin(temperture);
			break;
		case 'Q':
			break;
		default:
			cout << "Input invalid";
		}
	} while (unit != 'Q');
}
