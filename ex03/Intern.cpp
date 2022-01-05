#include "Intern.hpp"
#include <iostream>

Intern::Intern( void ){

	std::cout << "Intern - Default constructor called\n";
	return ;
};

Intern::Intern( Intern const & src ){

	std::cout << "Intern - Copy constructor called\n";
	*this = src;
	return ;
};

Intern::~Intern( void ){

	std::cout << "Intern - Destructor called\n";
	return;
};

Intern	&Intern::operator= ( Intern const & rhs ){

	this-> = ;
	return *this;
};

