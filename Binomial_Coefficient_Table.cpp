#include <iostream>
#include <vector>

int binomialCoeff(int n, int k) {
    int result = 1;
    if (k > n - k) {
        k = n - k;
    }
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Input: ";
    std::cin >> n;

    std::cout << "Mx ";
    for (int i = 0; i <= n; ++i) {
        std::cout << i << " ";
    }
    std::cout << "\n----------------------------------------------------------\n";
    for (int i = 0; i <= n; ++i) {
        std::cout << i << " ";
        for (int j = 0; j <= i; ++j) {
            std::cout << binomialCoeff(i, j) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
