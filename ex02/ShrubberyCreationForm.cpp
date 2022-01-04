#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string target="roundabout" ) :
	_name("Shrubbery Creation"),
	_isSigned(IS_NOT_SIGNED), 
	_requiredGradeToSign(145),
	_requiredGradeToExecute(137)
{

	std::cout << "ShrubberyCreationForm - Default constructor called\n";
	return ;
};

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ){

	std::cout << "ShrubberyCreationForm - Copy constructor called\n";
	*this = src;
	return ;
};

ShrubberyCreationForm::~ShrubberyCreationForm( void ){

	std::cout << "ShrubberyCreationForm - Destructor called\n";
	return;
};

ShrubberyCreationForm	&ShrubberyCreationForm::operator= ( ShrubberyCreationForm const & rhs ){

	this-> = ;
	return *this;
};

