#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm( std::string target="roundabout" );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm( void );


	private:
		std::string const _target;
		ShrubberyCreationForm	&operator= ( ShrubberyCreationForm const & rhs );

};
#endif
