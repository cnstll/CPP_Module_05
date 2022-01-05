NAME = a.out

SRCS = main.cpp  \
	Bureaucrat.cpp \
	Form.cpp \
	ShrubberyCreationForm.cpp \
	PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp

OBJS = $(SRCS:.cpp=.o)

CXX=clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^ 

clean :
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
