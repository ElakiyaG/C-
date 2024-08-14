#include <iostream>
#include <cstring>

void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* str, int l, int r) {
    if (l == r) {
        std::cout << str << "  ";
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

int main() {
    char str[] = "abcd";
    int n = strlen(str);
    std::cout << "The permutations of the string are: \n";
    permute(str, 0, n - 1);
    return 0;
}
