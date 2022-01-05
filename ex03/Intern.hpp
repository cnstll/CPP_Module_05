#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include <exception>

class Form;
class Intern {

	public:

		Intern( void );
		Intern( Intern const & src );
		~Intern( void );

		Form *makeRobotomyRequestForm(std::string const &target);
		Form *makePresidentialPardonForm(std::string const &target);
		Form *makeShrubberyCreationForm(std::string const &target);
		Form *makeForm(const std::string &formName, const std::string &formTarget);
		class FormTypeNotSupported : public std::exception {
			public:
				const char *what() const throw();
		};

	private:
		Intern	&operator= ( Intern const & rhs );

};
#endif
