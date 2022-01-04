#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( void ){

	std::cout << "PresidentialPardonForm - Default constructor called\n";
	return ;
};

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ){

	std::cout << "PresidentialPardonForm - Copy constructor called\n";
	*this = src;
	return ;
};

PresidentialPardonForm::~PresidentialPardonForm( void ){

	std::cout << "PresidentialPardonForm - Destructor called\n";
	return;
};

PresidentialPardonForm	&PresidentialPardonForm::operator= ( PresidentialPardonForm const & rhs ){

	this-> = ;
	return *this;
};

