#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#define IS_SIGNED 1
#define IS_NOT_SIGNED 0
#define IS_BUREAUCRAT_TROUFFION 150
#define IS_BUREAUCRAT_STONKS 1

class Bureaucrat ;

class Form {

	public:

		Form(std::string const  name="A48",
				int const RequiredGradeToSign=IS_BUREAUCRAT_STONKS,
				int const RequiredGradeToExecute=IS_BUREAUCRAT_STONKS);
		~Form( void );
		std::string getName(void) const;
		bool getIsSigned(void) const;
		int	getRequiredGradeToSign(void) const;
		int getRequiredGradeToExecute(void) const;
		Form &beSigned(Bureaucrat const &bureaucrat);
		Form( Form const & src );
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
		bool _isSigned;
		int	const _requiredGradeToSign;
		int const _requiredGradeToExecute;
		Form	&operator= ( Form const & rhs );
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);
#endif
