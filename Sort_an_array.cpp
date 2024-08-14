#include <iostream>

void sortArray(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];
  
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> *(arr + i);
    }

    sortArray(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    
    return 0;
}
