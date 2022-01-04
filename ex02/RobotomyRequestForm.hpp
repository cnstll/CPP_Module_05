#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm( void );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm( void );

		RobotomyRequestForm	&operator= ( RobotomyRequestForm const & rhs );

	private:
};
#endif
