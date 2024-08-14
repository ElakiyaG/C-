#include <iostream>
#include <cstring>

int main()
{
    char str[10];
    std::cin.get(str,10);
    int x=strlen(str);
    char rev[10];
    for(int i=x;i>=0;i--){
        std::cout<<str[i];
        rev[x-1]+=str[i];
    }
    std::cout<<rev;
    if(str[10]==rev[10]){
        std::cout<<"Palindrome";
    }

    return 0;
}
