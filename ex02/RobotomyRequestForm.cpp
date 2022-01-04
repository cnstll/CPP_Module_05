#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm( void ){

	std::cout << "RobotomyRequestForm - Default constructor called\n";
	return ;
};

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ){

	std::cout << "RobotomyRequestForm - Copy constructor called\n";
	*this = src;
	return ;
};

RobotomyRequestForm::~RobotomyRequestForm( void ){

	std::cout << "RobotomyRequestForm - Destructor called\n";
	return;
};

RobotomyRequestForm	&RobotomyRequestForm::operator= ( RobotomyRequestForm const & rhs ){

	this-> = ;
	return *this;
};

