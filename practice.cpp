#include <iostream>
#include <vector>
#include <cmath>


int main() {
    //varible will not be changed (const)
    //namespace- assign new value to variable
    //type def/ type alias- can raname a data type int - "nondecimal"
    //arithmetic opperators (+,-,*,/)
    //type conversion conversion of one data type to another, (implicit or explicit)
    //user imput, (cin>>)
    
    double a;
    double b;
    double c;

    std::cout << "enter side a: ";
    std::cin >> a;
    std::cout << "enter side b: ";
    std::cin >> b;

    c = sqrt((pow(a,2))+pow(b,2));

    std::cout << "the hypotenuse is " << c << " units" << '\n';

    return 0;
}