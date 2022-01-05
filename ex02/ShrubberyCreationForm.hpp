#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm( std::string const target="roundabout" );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm(void);
		std::string getTarget(void) const;
		void printTreesToFile(std::ofstream &outf) const;
		void execute(Bureaucrat const & executor) const;

	private:
		std::string const _target;
		ShrubberyCreationForm	&operator= ( ShrubberyCreationForm const & rhs );

};
#endif
