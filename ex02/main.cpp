#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main(void)
{
    {
        std::cout << "--------EX00------------" << std::endl;
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
    }
    {
     //   std::cout << std::endl;
     //   std::cout << "--------EX01------------" << std::endl;
     //   try {
     //       Form FormTooLow("FormToolow", 151, 150); //Grade too low
     //   }
     //   catch (std::exception &e) {
    	//	std::cerr << "Exception: " << e.what() << '\n';
    	//}
     //   //Trying to construct a class with a grade too high 
     //   //Exception is thrown and immediately handled by the main
     //   try {
     //       Form FormTooHigh("FormTooHigh", 2, -12); //Grade too high
     //   }
     //   catch (std::exception &e) {
    	//	std::cerr << "Exception: " << e.what() << '\n';
    	//}
     //   std::cout << std::endl;
     //   Bureaucrat Harry("Harry", 25); //Grade is correct
     //   Bureaucrat Jane("Jane", 1);
     //   Bureaucrat Bob("Bob", 150);
     //   Form formB32("B32", 26, 100);
     //   std::cout << std::endl;
     //   std::cout << "Form " << formB32.getName() << " features:\n";
     //   std::cout << formB32;
     //   std::cout << std::endl;
     //   std::cout << "Form " << formB32.getName() << " is being signed by Bob...\n";
     //   try {
     //       formB32.beSigned(Bob); //Grade too high
     //   }
     //   catch (std::exception &e) {
    	//	std::cerr << "Exception: " << e.what() << '\n';
    	//}
     //   std::cout << std::endl;
     //   std::cout << Jane;
     //   std::cout << "Jane is trying to sign the form " << formB32.getName() << "...\n";
     //   Jane.signForm(formB32);
     //   std::cout << std::endl;
     //   std::cout << Harry;
     //   std::cout << "Harry is being demoted....twice...\n";
     //   Harry.demote();
     //   Harry.demote();
     //   std::cout << Harry;
     //   Form CopyOfB32(formB32);
     //   std::cout << "Harry is trying to sign a copy of " << CopyOfB32.getName() << "...\n";
     //   Harry.signForm(CopyOfB32);
        
    }
    {
        std::cout << std::endl;
        std::cout << "--------EX02------------" << std::endl;
        Bureaucrat Harry("Harry", 25);
        Bureaucrat Jane("Jane", 1);
        Bureaucrat Bob("Bob", 150);
        ShrubberyCreationForm formS32("street");
        formS32.execute(Jane);
        formS32.beSigned(Harry);
        formS32.execute(Bob);
        formS32.execute(Jane);
    }
    return 0;
}