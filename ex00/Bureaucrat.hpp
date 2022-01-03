#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <exception>
#define IS_BUREAUCRAT_TROUFFION 150

class Bureaucrat {

	public:

		Bureaucrat( std::string name="Allen Gamble", int grade=IS_BUREAUCRAT_TROUFFION );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat( void );

    	void promote( void ); // sub 1 from grade
    	void demote( void ); // add 1 from grade
		int getGrade( void ) const;
		std::string getName( void ) const;
		Bureaucrat	&operator= ( Bureaucrat const & rhs );
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

};

std::ostream	&operator<< ( std::ostream & out, const Bureaucrat & rhs );
#endif
