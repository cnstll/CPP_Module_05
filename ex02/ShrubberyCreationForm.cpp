#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <exception>
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) :
	Form("Shrubbery Creation", 145, 137), _target(target)
{

	std::cout << "ShrubberyCreationForm - Default constructor called\n";
	return ;
};

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
	Form(src.getName(), src.getRequiredGradeToSign(), src.getRequiredGradeToExecute()), _target(src.getTarget())
{

	std::cout << "ShrubberyCreationForm - Copy constructor called\n";
	return ;
};

std::string ShrubberyCreationForm::getTarget(void) const {

	return _target;
};

void ShrubberyCreationForm::printTreesToFile(std::ofstream &outf) const {
	int numberOfTrees = 3;
	const char *tree = 
	"		   	   _-_			\n"
	"		    /~~   ~~\\		\n"
	"		 /~~         ~~\\	\n"
	"		{               }	\n"
	"		 \\  _-     -_  /	\n"
	"		   ~  \\ //  ~		\n"
	"		_- -   | | _- _		\n"
	"		  _ -  | |   -_		\n"
	"		      // \\         \n";

	for (int i = 0; i < numberOfTrees; i++)	
	{
		outf << tree << "\n"; 
	}
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{

	try {
		checkBeforeExecute(executor);
		std::string filename = this->getTarget() + "_shrubbery"; 
	    std::ofstream outf(&filename[0]);
		printTreesToFile(outf);
		outf.close();
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
};

ShrubberyCreationForm::~ShrubberyCreationForm( void ){

	std::cout << "ShrubberyCreationForm - Destructor called\n";
	return;
};

ShrubberyCreationForm	&ShrubberyCreationForm::operator= ( ShrubberyCreationForm const & rhs ){

	(void)rhs;
	return *this;
};

