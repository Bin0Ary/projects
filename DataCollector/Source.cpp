#include <iostream>
#include <vector>
#include <algorithm>
#include "prototypes.h"
int main() {
	bool quit = false;
	std::vector <int> data{};
	do {
		call_menu();
		switch (get_answer()) {
		case 1:
			display_vector(data);
			break;
		case 2:
			add_to_vector(data);
			break;
		case 3:
			std::cout << sum_vector(data) << std::endl;
			break;
		case 4:
			std::cout << mean_vector(data) << std::endl;
			break;
		case 5:
			std::cout << smallest_vector(data) << std::endl;
			break;
		case 6:
			std::cout << biggest_vector(data) << std::endl;
			break;
		case 7:
			clear_vector(data);
			break;
		case 8:
			quit = true;
			break;
		defaut:
			std::cout << "Invalid answer!";
		}
	} while (quit != true);
}
void call_menu() {
	std::cout << "Select from the functions below: \n" 
		<< "Print (1)\n" 
		<< "Add (2) \n" 
		<< "Sum (3) \n" 
		<< "Mean (4) \n" 
		<< "Smallest (5) \n" 
		<< "Largest (6) \n" 
		<< "Clear (7) \n" 
		<< "Quit (8)" << std::endl;
}
int get_answer() {
	int answer{};
	std::cin >> answer;
	if ((int)(answer) == answer && answer != 0)
		return answer;
	else {
		std::cout << "Invalid input \n" << "Exiting.......";
		return 8;
	}
}
void add_to_vector(std::vector <int>& v) {
	int answer{};
	std::cout << "How many numbers: ";
	std::cin >> answer;
	for (size_t i{ 1 }; answer >= i; i++) {
		int num{};
		std::cout << "Enter number " << i << ": ";
		std::cin >> num;
		v.push_back(num);
		}
	}
void display_vector(const std::vector <int>& v) {
	std::cout << "[ ";
	for (auto val : v) {
		std::cout << val << " ";
	}
	std::cout << "]" << std::endl;
}
int sum_vector(const std::vector <int>& v) {
	int answer{};
	for (auto val : v) {
		answer += val;
	}
	return answer;
}
float mean_vector(const std::vector <int>& v) {
	float mean{};
	mean = static_cast<float>(sum_vector(v)) / v.size();
	return mean;
}
void clear_vector(std::vector <int>& v) {
	v.clear();
}
int smallest_vector(std::vector <int> v) {
	std::sort(v.begin(), v.end());
	return v.front();
}
int biggest_vector(std::vector <int> v) {
	std::sort(v.begin(), v.end());
	return v.back();
}