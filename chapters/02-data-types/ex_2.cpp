#include<iostream>

int main(){
    unsigned int yards{}, feet{}, inches{};
    std::cout << "enter a distance as yards feet inches "
              << "with the three values separated by space: ";
    std::cin >> yards >> feet >> inches;

    const unsigned feet_per_yard{3};
    const unsigned inches_per_foot{12};

    unsigned total_inches{};
    total_inches = inches + inches_per_foot * (feet_per_yard * yards + feet);
    std::cout << "The distance corresponds to " << total_inches << "inches.\n";
    
    //convert distance from inches to yards, feet
    
}