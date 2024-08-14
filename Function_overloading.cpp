#include <iostream>
#include <cstring> 
using namespace std;

void Add(int a, int b) {
    int sum = a + b;
    cout << "Sum of " << a << " and " << b << " = " << sum << endl;
}

void Add(char str1[], char str2[]) {
    char result[100];  
    strcpy(result, str1);  
    strcat(result, str2);  

    cout << "Concatenation of \"" << str1 << "\" and \"" << str2 << "\" = " << result << endl;
}

int main() {

    Add(10, 20);
    char str1[] = "Elakiya ";
    char str2[] = "Govindaraj";
    Add(str1, str2);

    return 0;
}
