#include <iostream>
#include <cmath>
int main(void) {
	using std::cout;
	using std::cin;
	using std::endl;
	float n;
	char a;
	char a1;
	char a2 = 'Y';
	while(a2 == 'Y'){
	cout << "Enter the temperture: ";
	cin >> n;
	cout <<  endl << "Enter the unit of temperture (F) (K) (C): ";
	cin >> a;
	a = toupper(a);
	switch (a) {
	case 'F':
		cout << endl << "Fahrenheit" << endl;
		cout << "Convert temperture to (C) (K): " << endl;
		cin >> a1;
		a1 = toupper(a1);
		if (a1 == 'C') {
			n = (n - 32) * 0.55;
			n = round(n);
			cout << "The converted temperture is: " << n;
		}
		else if (a1 == 'K') {
			n = (n - 32) * 0.55 + 273.15;
			n = round(n);
			cout << "The converted temperture is: " << n;
		}
		else {
			cout << "Input is not valid";
		}
		break;
	case 'C':
		cout << endl << "Celsius" << endl;
		cout << "Convert temperture to (F) (K): " << endl;
		cin >> a1;
		a1 = toupper(a1);
		if (a1 == 'F') {
			n = (1.8 * n) + 32 ;
			n = round(n);
			cout << "The converted temperture is: " << n;
		}
		else if (a1 == 'K') {
			n = n + 273.15;
			n = round(n);
			cout << "The converted temperture is: " << n;
		}
		else {
			cout << "Input is not valid";
		}
		break;
	case 'K':
		cout << endl << "Kelvin" << endl;
		cout << "Convert temperture to (C) (F): " << endl;
		cin >> a1;
		a1 = toupper(a1);
		if (a1 == 'C') {
			n = n - 273.15;
			n = round(n);
			cout << "The converted temperture is: " << n;
		}
		else if (a1 == 'F') {
			n = (n - 273.15) * 1.8 + 32;
			n = round(n);
			cout << "The converted temperture is: " << n;
		}
		else {
			cout << "Input is not valid";
		}
		break;
	default:
		cout << "Input is not valid";
	}
	cout << endl << "Would you like to continue (Y) (N): ";
	cin >> a2;
	a2 = toupper(a2);
	}
	cout << "Thank you for using this program";
	return 0;
}