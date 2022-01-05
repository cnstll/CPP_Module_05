#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) :
Form("Presidential Pardon", 25, 5), _target(target)
{

	std::cout << "PresidentialPardonForm - Default constructor called\n";
	return ;
};

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
Form(src.getName(), src.getRequiredGradeToSign(), src.getRequiredGradeToExecute()), _target(src.getTarget())
{

	std::cout << "PresidentialPardonForm - Copy constructor called\n";
	return ;
};

PresidentialPardonForm::~PresidentialPardonForm( void ){

	std::cout << "PresidentialPardonForm - Destructor called\n";
	return;
};

std::string PresidentialPardonForm::getTarget(void) const {

	return _target;
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	try {
		checkBeforeExecute(executor);
		std::cout << this->getTarget() << " was forgiven by Zafod Beeblebrox.\n";
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
};

PresidentialPardonForm	&PresidentialPardonForm::operator= ( PresidentialPardonForm const & rhs ){

	rhs.getTarget();
	return *this;
};

