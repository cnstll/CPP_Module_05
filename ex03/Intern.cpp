#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

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

Form *Intern::makeRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
};

Form *Intern::makePresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
};

Form *Intern::makeShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
};

Form *Intern::makeForm(const std::string &formName, const std::string &formTarget)
{
	std::string formTypes[4] = {"shrubbery creation", "presidential pardon", "robotomy request", ""};
	int i = 0;
	Form *( Intern::*pointerToForm[4] )(std::string const &) =
		{&Intern::makeShrubberyCreationForm, &Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, 0};

	while (!formTypes[i].empty() && formTypes[i].compare(formName))
		i++;
	if (i == 3)
		throw Intern::FormTypeNotSupported();
	else
		return (this->*pointerToForm[i])(formTarget);
}

const char * Intern::FormTypeNotSupported::what() const throw(){
	return "Form type not Supported!";
};

Intern	&Intern::operator= ( Intern const & rhs ){

	(void)rhs;
	return *this;
};

