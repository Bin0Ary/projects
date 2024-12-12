#pragma once
using namespace std;
double f_to_c(double temperture) {
	return (temperture - 32) * 0.5555;
}
double f_to_k(double temperture) {
	return c_to_k(f_to_c(temperture));
}
double k_to_c(double temperture) {
	return temperture - 273.15;
}
double k_to_f(double temperture) {
	return c_to_f(k_to_c(temperture));
}
double c_to_f(double temperture) {
	return (temperture * 1.8) + 32;
}
double c_to_k(double temperture) {
	return temperture + 273.15;
}
double fahrenheit(double temperture) {
	char conversion;
	cout << "Convert to (C) (K): ";
	cin >> conversion;
	conversion = toupper(conversion);
	switch (conversion) {
	case 'C':
		return f_to_c(temperture);
		break;
	case 'K':
		return f_to_k(temperture);
		break;
	default:
		cout << "Input not valid";
	}
}
double kelvin(double temperture) {
	char conversion;
	cout << "Convert to (C) (F): ";
	cin >> conversion;
	conversion = toupper(conversion);
	switch (conversion) {
	case 'C':
		return k_to_c(temperture);
		break;
	case 'F':
		return k_to_f(temperture);
		break;
	default:
		cout << "Input not valid";
	}
}
double celsius(double temperture) {
	char conversion;
	cout << "Convert to (F) (K): ";
	cin >> conversion;
	conversion = toupper(conversion);
	switch (conversion) {
	case 'F':
		return c_to_f(temperture);
		break;
	case 'K':
		return c_to_k(temperture);
		break;
	default:
		cout << "Input not valid";
	}
}