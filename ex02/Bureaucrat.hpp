#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.h"
#include <string>
#include <exception>
#define IS_BUREAUCRAT_TROUFFION 150

class Form;

class Bureaucrat {

	public:

		Bureaucrat( std::string name="Allen Gamble", int grade=IS_BUREAUCRAT_TROUFFION );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

    	void promote( void ); // sub 1 from grade
    	void demote( void ); // add 1 from grade
		int getGrade( void ) const;
		std::string getName( void ) const;
		void signForm(Form &formToSign);
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
	private:
		std::string const _name;
		int _grade;
		Bureaucrat	&operator= ( Bureaucrat const & rhs );

};

std::ostream	&operator<< ( std::ostream & out, const Bureaucrat & rhs );
#endif
