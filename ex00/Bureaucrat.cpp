#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : 
	_name(name) {

	std::cout << "Bureaucrat - Default constructor called\n";
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException(); 
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException(); 
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

	this->_grade = rhs.getGrade();
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
		std::cout << getName() << "...\n";
		int currentGrade = getGrade();
		if (currentGrade <= 1 || currentGrade >= 150)
			throw Bureaucrat::GradeTooHighException(); 
		this->_grade = _grade - 1;
	} catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << '\n';
	}
};
void Bureaucrat::demote( void ){

	try {
		std::cout << "Demoting ";
		std::cout << getName() << "...\n";
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

std::ostream	&operator<< ( std::ostream & out, const Bureaucrat & rhs ){

	std::cout << rhs.getName() << ", bureaucrat grade ";
	std::cout << rhs.getGrade() << std::endl;
	return out;
};

