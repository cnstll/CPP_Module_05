#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>

void printSectionTitle(std::string title){

    std::cout << std::endl;
    std::cout << "-------" << title << "-------" << std::endl;
    std::cout << std::endl;
}

int main(void)
{
    {
    //    std::cout << "--------EX00------------" << std::endl;
    //    //Trying to construct a class with a grade too low
    //    //Exception is thrown and immediately handled by the main
    //    try {
    //        Bureaucrat BobTooLow("Bob Toolow", 151); //Grade too low
    //    }
    //    catch (std::exception &e) {
    //		std::cerr << "Exception: " << e.what() << '\n';
    //	}
    //    //Trying to construct a class with a grade too high 
    //    //Exception is thrown and immediately handled by the main
    //    try {
    //        Bureaucrat JaneTooHigh("Jane TooHigh", 0); //Grade too high
    //    }
    //    catch (std::exception &e) {
    //		std::cerr << "Exception: " << e.what() << '\n';
    //	}
    //    std::cout << std::endl;
    //    //Constructing valid Bureaucrat here
    //    Bureaucrat Harry("Harry", 25); //Grade is correct
    //    Bureaucrat Jane("Jane", 1);
    //    Bureaucrat Bob("Bob", 150);
    //    std::cout << std::endl;
    //    Harry.promote(); //Increase grade from 25 to 24
    //    std::cout << Harry;
    //    Harry.demote(); //Decrease grade from 24 to 25
    //    std::cout << Harry;
    //    std::cout << std::endl;
    //    std::cout << Jane;
    //    Jane.promote();  //Grade too high
    //    std::cout << Jane;
    //    std::cout << std::endl;
    //    std::cout << Bob;
    //    Bob.demote(); //Grade too low
    //    std::cout << Bob;
    //    std::cout << std::endl;
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
    //    printSectionTitle("EX02");
    //    Bureaucrat Harry("Harry", 25);
    //    Bureaucrat Jane("Jane", 1);
    //    Bureaucrat Bob("Bob", 150);
    //    ShrubberyCreationForm formS32("street");
    //    PresidentialPardonForm formP32("Arthur Dent");
    //    RobotomyRequestForm formR32("The Poor Bob");
    //    printSectionTitle("Shrubbery Form");
    //    std::cout << "Form " << formS32.getName() << " features:\n";
    //    std::cout << formS32;
    //    std::cout << std::endl;
    //    std::cout << "Jane is trying to execute the form " << formS32.getName() << "...\n";
    //    formS32.execute(Jane);
    //    std::cout << std::endl;
    //    std::cout << "Harry signs a form" << formS32.getName() << "...\n";
    //    formS32.beSigned(Harry);
    //    std::cout << std::endl;
    //    std::cout << "Bob is trying to execute a form " << formS32.getName() << "...\n";
    //    formS32.execute(Bob);
    //    std::cout << std::endl;
    //    std::cout << "Jane is trying to execute a form " << formS32.getName() << "...\n";
    //    Jane.executeForm(formS32);
    //    std::cout << "Nice shrubberies are now growing in the " << formS32.getTarget() << " (target)\n";    
    //    printSectionTitle("Presidential Pardon Form");
    //    std::cout << "Form " << formP32.getName() << " features:\n";
    //    std::cout << formP32;
    //    std::cout << std::endl;
    //    std::cout << "Bob is trying to execute a form " << formP32.getName() << "...\n";
    //    formP32.execute(Bob);
    //    std::cout << "Harry is trying to sign the form " << formP32.getName() << "...\n";
    //    Harry.signForm(formP32);
    //    std::cout << "Harry is trying to execute a form " << formP32.getName() << "...\n";
    //    formP32.execute(Harry);
    //    std::cout << "Jane is trying to execute a form" << formP32.getName() << "...\n";
    //    formP32.execute(Jane);
    //    std::cout << std::endl;
    //    std::cout << "Jane is trying to execute a form " << formP32.getName() << "...\n";
    //    Jane.executeForm(formP32);
    //    printSectionTitle("Robotomization Request Form");
    //    std::cout << "Form " << formR32.getName() << " features:\n";
    //    std::cout << formR32;
    //    std::cout << std::endl;
    //    std::cout << "Bob is trying to execute a form " << formR32.getName() << "...\n";
    //    formR32.execute(Bob);
    //    std::cout << "Harry is trying to sign the form " << formR32.getName() << "...\n";
    //    Harry.signForm(formR32);
    //    std::cout << std::endl;
    //    std::cout << "Harry is trying to execute a form " << formP32.getName() << "...\n";
    //    formR32.execute(Harry);
    //    std::cout << std::endl;
    //    std::cout << "Jane is trying to execute a form " << formP32.getName() << "...\n";
    //    Jane.executeForm(formR32);
    //    printSectionTitle("Cleaning");
    }
    {

        printSectionTitle("EX03");
        Bureaucrat Harry("Harry", 25);
        Bureaucrat Jane("Jane", 1);
        Bureaucrat Bob("Bob", 150);
        Intern Kevin;
        printSectionTitle("Intern MakeForm");
        Form *formS32 = Kevin.makeForm("shrubbery creation", "mayor garden"); 
        std::cout << *formS32;
        std::cout << std::endl;
        Form *formP32 = Kevin.makeForm("robotomy request", "The Poor Bob");
        std::cout << *formP32;
        std::cout << std::endl;
        Form *formR32 = Kevin.makeForm("presidential pardon", "Arthur Dent");
        std::cout << *formR32;
        std::cout << std::endl;
        try {

            Form *formDoNotExist = Kevin.makeForm("salary for intern", "intern");
            std::cout << *formDoNotExist;
        }
        catch (std::exception &e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }
        printSectionTitle("Cleaning");
    }
    return 0;
}