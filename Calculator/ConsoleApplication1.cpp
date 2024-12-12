#include <iostream>
#include <cmath>
int main(void) {
	using std::cout;
	using std::cin;
	using std::endl;
	float n1;
	float n2;
	float r;
	int a1;
	char a2 = 'Y';
	while(a2 == 'Y'){
	cout << "Please enter the first number: ";
	cin >> n1;
	cout << "Please enter the second number: ";
	cin >> n2;
	cout << "Please choose the operation: " << endl << "Addition (1) | Subtraction (2) | Multiplication (3) | Division (4) | Power (5) | Square Root (6): ";
	cin >> a1;
	switch (a1) {
	case 1:
		r = n1 + n2;
		cout << "Answer is: " << r;
		break;
	case 2:
		r = n1 - n2;
		cout << "Answer is: " << r;
		break;
	case 3:
		r = n1 * n2;
		cout << "Answer is: " << r;
		break;
	case 4:
		r = n1 / n2;
		cout << "Answer is: " << r;
		break;
	case 5:
		r = pow(n1, n2);
		cout << "Answer is: " << r;
			break;
	case 6:
		n1 = sqrt(n1);
		n2 = sqrt(n2);
		cout << "Answer is: " << n1 << endl << "Answer is: " << n2;
		break;


	default:
		cout << a1 << " Is not a correct input";
	}
	cout << endl << "Do you want to continue (Y) (N)? ";
	cin >> a2;
	a2 = toupper(a2);
	}
	cout << "Thank you for using this calculator!";
}