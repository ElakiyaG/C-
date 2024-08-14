#include <iostream>

int main() {
    int total_days, years, weeks, days;

    
    std::cout << "Number of days: ";
    std::cin >> total_days;

    
    years = total_days / 365;  
    total_days %= 365;         
    weeks = total_days / 7;    
    days = total_days % 7;
    
    std::cout << "Years: " << years << " Weeks: " << weeks << " Days: " << days << std::endl;

    return 0;
}
