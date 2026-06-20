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
    std::cout << "Enter distance in inches ";
    std::cin >> total_inches;
    feet = total_inches / inches_per_foot;
    inches = total_inches % inches_per_foot;
    yards = feet / feet_per_yard;
    feet = feet % feet_per_yard;
    std::cout << "This distance corresponds to " << yards << " yards " << feet << " feet " << inches << " inches.\n";
}