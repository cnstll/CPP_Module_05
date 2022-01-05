#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm( std::string const target="Betty");
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm( void );

		std::string getTarget(void) const;
		void execute(Bureaucrat const & executor) const;

	private:
		std::string const _target;
		RobotomyRequestForm	&operator= ( RobotomyRequestForm const & rhs );
};
#endif
