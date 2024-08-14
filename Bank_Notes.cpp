#include <iostream>

int main() {
    int amount;
    int hundred, fifty, twenty, ten, five, one;

    std::cout << "Enter the amount: ";
    std::cin >> amount;

    hundred = amount / 100;
    amount %= 100;

    fifty = amount / 50;
    amount %= 50;

    twenty = amount / 20;
    amount %= 20;

    ten = amount / 10;
    amount %= 10;

    five = amount / 5;
    amount %= 5;

    one = amount / 1;

    std::cout << "There are:\n";
    std::cout << hundred << " Note(s) of 100.00\n";
    std::cout << fifty << " Note(s) of 50.00\n";
    std::cout << twenty << " Note(s) of 20.00\n";
    std::cout << ten << " Note(s) of 10.00\n";
    std::cout << five << " Note(s) of 5.00\n";
    std::cout << one << " Note(s) of 1
}
