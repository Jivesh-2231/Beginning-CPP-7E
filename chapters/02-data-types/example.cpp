#include<iostream>
int main(){
    int apple_count{15};
    int orange_count{15};
    int total_fruits{apple_count + orange_count};

    std::cout << "number of apples " << apple_count << std::endl;
    std::cout << "number of orange " << orange_count << std::endl;
    std::cout << "number of total fruits " << total_fruits << std::endl;

    int counter{}; // Zero intialize

    //fixed variable with constant keyword
    const unsigned toe_count{10};


    //integer - decimal literal
    unsigned long age {30UL}; //here UL are suffix for U- unsigned and L- long

    //hexadecimal literal
    unsigned int color_code{0xFF0000}; //hexadecimal literal for red color

    // compound arithmetic expressions
    long width{4};
    long length{5};
    long area{width * length};
    long perimeter{(width + length) * 2};
    
}