#include <iostream>
using namespace std;

int Add(int a, int b) {
    return a + b;
}

int Multiply(int a, int b) {
    return a * b;
}

int Divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int Subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*ptr[4])(int, int) = {Add, Multiply, Divide, Subtract};
    int a = 10, b = 5;
    cout << "Addition of " << a << " and " << b << " = " << ptr[0](a, b) << endl;
    cout << "Multiplication of " << a << " and " << b << " = " << ptr[1](a, b) << endl;
    cout << "Division of " << a << " by " << b << " = " << ptr[2](a, b) << endl;
    cout << "Subtraction of " << b << " from " << a << " = " << ptr[3](a, b) << endl;
    return 0;
}
