#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
    //Trying to construct a class with a grade too low
    //Exception is thrown and immediately handled by the main
    try {
        Bureaucrat BobTooLow("Bob Toolow", 151); //Grade too low
    }
    catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
    //Trying to construct a class with a grade too high 
    //Exception is thrown and immediately handled by the main
    try {
        Bureaucrat JaneTooHigh("Jane TooHigh", 0); //Grade too high
    }
    catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
    std::cout << std::endl;
    //Constructing valid Bureaucrat here
    Bureaucrat Harry("Harry", 25); //Grade is correct
    Bureaucrat Jane("Jane", 1);
    Bureaucrat Bob("Bob", 150);
    std::cout << std::endl;
    Harry.promote(); //Increase grade from 25 to 24
    std::cout << Harry;
    Harry.demote(); //Decrease grade from 24 to 25
    std::cout << Harry;
    std::cout << std::endl;
    std::cout << Jane;
    Jane.promote();  //Grade too high
    std::cout << Jane;
    std::cout << std::endl;
    std::cout << Bob;
    Bob.demote(); //Grade too low
    std::cout << Bob;
    std::cout << std::endl;
    return 0;
}