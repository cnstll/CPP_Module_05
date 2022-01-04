#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:

		PresidentialPardonForm( void );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm( void );

		PresidentialPardonForm	&operator= ( PresidentialPardonForm const & rhs );

	private:
		std::string const _name;
		bool _isSigned;
		int	const _requiredGradeToSign;
		int const _requiredGradeToExecute;
};
#endif
