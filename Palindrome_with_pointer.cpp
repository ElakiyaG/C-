#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    
    char str[100]; 
    char *ptr;
    int iLen, iCount;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);
  
    ptr = str;  
    iLen = strlen(ptr);

    cout << "Length of the string: " << iLen << endl;

    for (iCount = 0; iCount < iLen / 2; iCount++) {
        if (*(ptr + iCount) != *(ptr + iLen - iCount - 1)) {
            isPalindrome = false;
            break;
        }
    }

    
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
