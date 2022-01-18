#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) :
Form("Robotomy Request", 72, 45), _target(target)
{

	std::cout << "RobotomyRequestForm - Default constructor called\n";
	return ;
};

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
Form(src.getName(), src.getRequiredGradeToSign(), src.getRequiredGradeToExecute()), _target(src.getTarget())
{

	std::cout << "RobotomyRequestForm - Copy constructor called\n";
	return ;
};

std::string RobotomyRequestForm::getTarget(void) const {

	return _target;
};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	static bool done = false;

	try {
		checkBeforeExecute(executor);
		if (done == false){
  			std::srand(time(NULL));
			done = true;
		}
		bool coinFlip = std::rand() % 2;
		std::cout << "** drilling noise **\n";
		if (coinFlip == false)
			std::cout << this->getTarget() << " was successfully robotomized.\n";
		else
			std::cout << "Robotomization failed for " << this->getTarget() << "\n";
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
};

RobotomyRequestForm::~RobotomyRequestForm( void ){

	std::cout << "RobotomyRequestForm - Destructor called\n";
	return;
};

RobotomyRequestForm	&RobotomyRequestForm::operator= ( RobotomyRequestForm const & rhs ){

	(void)rhs;
	return *this;
};

