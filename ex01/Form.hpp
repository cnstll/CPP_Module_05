#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <exception>
#include <string>
#define IS_SIGNED 1
#define IS_NOT_SIGNED 0
#define IS_BUREAUCRAT_TROUFFION 150
#define IS_BUREAUCRAT_STONKS 1
/*
Vous ajouterez également une fonction beSigned qui prend un Bureaucrat, et rend
le formulaire signé si la note du bureaucrate est suffisamment élevée. Rappelez-vous toujours que la note 1 est meilleure que la n ote 2. Si la note est trop basse, elle déclenche
une Form::GradeTooLowException.
Ajoutez également une fonction signForm à Bureaucrat. Si la signature est réussie,
elle imprimera quelque chose comme "<bureaucrat> signs <form>", sinon elle imprimera quelque chose comme "<bureaucrat> cannot sign because <raison>".
Ajoutez tout ce qui est nécessaire pour tester ceci à votre main.
*/
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
		Form beSigned(Bureaucrat const &bureaucrat);
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
		Form( Form const & src );
		Form	&operator= ( Form const & rhs );
};
std::ostream &operator<<(std::ostream out, Form &rhs);
#endif
