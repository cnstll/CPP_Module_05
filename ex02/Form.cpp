#include "Form.hpp"
#include <iostream>

Form::Form(std::string const  name, int const RequiredGradeToSign, int const RequiredGradeToExecute) :
	_name(name),
	_isSigned(IS_NOT_SIGNED), 
	_requiredGradeToSign(RequiredGradeToSign),
	_requiredGradeToExecute(RequiredGradeToExecute)
{
	std::cout << "Form - Default constructor called\n";
	if (RequiredGradeToSign > 150 || RequiredGradeToExecute > 150)
		throw Form::GradeTooHighException(); 
	if (RequiredGradeToSign < 1 || RequiredGradeToExecute < 1)
		throw Form::GradeTooLowException(); 
	return ;
};

Form::Form( Form const & src ) :
_name(src.getName()),
_isSigned(src.getIsSigned()),
_requiredGradeToSign(src.getRequiredGradeToSign()),
_requiredGradeToExecute(src.getRequiredGradeToExecute())
{
	std::cout << "Form - Copy constructor called\n";
	return ;
};

Form::~Form( void ){

	std::cout << "Form - Destructor called\n";
	return;
};

std::string Form::getName(void) const{ return _name;};
bool Form::getIsSigned(void) const { return _isSigned;};
int	Form::getRequiredGradeToSign(void) const {return _requiredGradeToSign;};
int Form::getRequiredGradeToExecute(void) const {return _requiredGradeToExecute;};

Form &Form::beSigned(Bureaucrat const &bureaucrat){

	if(this->getRequiredGradeToSign() < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else if (this->_isSigned)
		std::cout << "Form " << this->getName() << "already signed!\n";
	else
		this->_isSigned = true;
	return *this;
};

void Form::checkBeforeExecute(Bureaucrat const & executor)
{
		if (this->getIsSigned() == false) 
			throw Form::FormNotSignedException();
		if (executor.getGrade() > this->getRequiredGradeToExecute()) 
			throw Form::GradeTooLowException();
}

Form	&Form::operator= ( Form const & rhs ){

	rhs.getName();
	return *this;
};

const char* Form::GradeTooHighException::what() const throw(){
	return ("Grade too high to sign or execute the contract!");
};

const char* Form::GradeTooLowException::what() const throw(){
	return ("Grade too low to sign or execute the contract!");
};

const char* Form::FormNotSignedException::what() const throw(){
	return ("Form not signed before execution");
};

std::ostream &operator<<(std::ostream &out, const Form &rhs){

	out << rhs.getName() << " form is ";
	if (rhs.getIsSigned() == false)
		out << "not signed.\n";
	else
		out << "signed.\n";
	out << "Grade required to sign the form: " << rhs.getRequiredGradeToSign() << ".\n";
	out << "Grade required to execute the form: " << rhs.getRequiredGradeToExecute() << ".\n";
	return out;
};
