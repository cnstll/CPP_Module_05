#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : 
	_name(name) {

	std::cout << "Bureaucrat - Default constructor called\n";
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException(); 
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException(); 
	_grade = grade;
	return ;
};

Bureaucrat::Bureaucrat( Bureaucrat const & src ) :
	_name(src.getName()), _grade(src.getGrade()){

	std::cout << "Bureaucrat - Copy constructor called\n";
	return ;
};

Bureaucrat::~Bureaucrat( void ){

	std::cout << "Bureaucrat - Destructor called\n";
	return;
};

Bureaucrat	&Bureaucrat::operator= ( Bureaucrat const & rhs ){

	(void)rhs;	
	return *this;
};

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade too high!");
};

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade too low!");
};

void Bureaucrat::promote( void ){

	try {
		std::cout << "Promoting ";
		std::cout << getName();
		std::cout << " with grade " << getGrade() << "...\n";
		int currentGrade = getGrade();
		if (currentGrade <= 1)
			throw Bureaucrat::GradeTooHighException(); 
		this->_grade = _grade - 1;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
};
void Bureaucrat::demote( void ){

	try {
		std::cout << "Demoting ";
		std::cout << getName();
		std::cout << " with grade " << getGrade() << "...\n";
		int currentGrade = getGrade();
		if (currentGrade >= 150)
			throw Bureaucrat::GradeTooLowException(); 
		_grade = _grade + 1;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
};

int Bureaucrat::getGrade( void ) const { return _grade;};

std::string Bureaucrat::getName( void ) const { return _name;};

void Bureaucrat::signForm(Form &formToSign){

	try {
		formToSign.beSigned(*this);
		std::cout << this->getName() << " successfully signed form ";
		std::cout << formToSign.getName() << "\n";
	}
	catch(std::exception &e){

		std::cerr << this->getName() << " cannot sign form " ;
		std::cerr << formToSign.getName() << " because ";
		std::cerr << e.what() << "\n";
	}
};

std::ostream	&operator<< ( std::ostream & out, const Bureaucrat & rhs ){

	out << rhs.getName() << ", bureaucrat grade ";
	out << rhs.getGrade() << std::endl;
	return out;
};

