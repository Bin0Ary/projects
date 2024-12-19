#include <iostream>
#include "account.h"
void main_menu(int &counter, account &account1);
account create_account(int &counter);
size_t get_answer();
void menu_logic(size_t answer, int &counter, account &account1);
bool quit{ false };
int main() {
    int counter{0};
    account account1;
    std::cout << "Hello, welcome to the terminal banking system" << std::endl;
    do {main_menu(counter, account1);} while (quit != true);
}

void main_menu(int &counter, account &account1) {
    std::cout << "Choose from the options below" << std::endl;
    if (counter < 1) { std::cout << "(1) Create account "; }
        std::cout << "(2) Deposit "
        << "(3) Withdraw "
        << "(4) Balance "
        << "(5) Quit" << std::endl;
    menu_logic(get_answer(), counter, account1);
}
size_t get_answer() {
    size_t answer{ 0 };
    std::cin >> answer;
    return answer;
}
void menu_logic(size_t answer, int &counter, account &account1) {
    double amount{};
    switch (answer) {
    case 1:
        account1 = create_account(counter);
        break;
    case 2:
        std::cout << "Enter amount: ";
        std::cin >> amount;
        account1.deposit(amount);
        break;
    case 3:
        std::cout << "Enter amount: ";
        std::cin >> amount;
        account1.withdraw(amount);
        break;
    case 4:
        std::cout << account1.get_balance() << std::endl;
        break;
    case 5:
        quit = true;
        break;
    default:
        std::cout << "Invalid answer";
    };
}

account create_account(int &counter) {
    std::string name{};
    std::cout << "Enter your account name: " << std::endl;
    std::cin >> name;
    account account1{ name };
    std::cout << "Account created" << std::endl;
    counter = 1;
    return account1;
}
