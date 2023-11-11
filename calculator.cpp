#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "Primul numar: ";
    std::cin >> a;
    std::cout << "Al doilea numar: ";
    std::cin >> b;
    std::cout << "operatia? (+, -, *, /): ";
    std::cin >> op;


    double result;

    switch (op) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        std::cout << "nu merge";
        return 0;
    }

    std::cout << "Result: " << result;

    return 0;
}