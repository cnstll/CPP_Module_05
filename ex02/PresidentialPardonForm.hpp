#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm( std::string const target="Arthur Dent");
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm( void );

		std::string getTarget(void) const;
		void execute(Bureaucrat const & executor) const;

	private:
		std::string const _target;
		PresidentialPardonForm	&operator= ( PresidentialPardonForm const & rhs );
};
#endif
