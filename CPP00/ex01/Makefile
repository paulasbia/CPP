.SILENT:

NAME		= 		phonebook
NAME_T		=		phonebook_unit
SRCS		=		PhoneBook.cpp Contact.cpp main.cpp utils.cpp
SRCS_T		=		PhoneBook.cpp Contact.cpp main.cpp utils.cpp
OBJS 		=		$(SRCS:.cpp=.o)
OBJS_T		=		$(SRCS_T:.cpp=.o)
CXXFLAGS		=		-Wall -Wextra -Werror -std=c++98
RM			=		rm -f

COLOUR_GREEN=\033[32m
COLOUR_RED=\033[31m
COLOUR_END=\033[0m
COLOUR_MAG=\001\e[0;35m\002

objs/%.o: */%.cpp
					@c++ $(CXXFLAGS) -c $< -o $@

${NAME}: ${OBJS}
	@c++ $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(COLOUR_MAG)\nNice! PhoneBook Compiled! $(COLOUR_GREEN)ᕦ$(COLOUR_RED)♥$(COLOUR_GREEN)_$(COLOUR_RED)♥$(COLOUR_GREEN)ᕤ\n$(COLOUR_END)"

all: ${NAME}

${NAME_T}: ${OBJS_T}
	@c++ $(CXXFLAGS)  $(OBJS_T) -o $(NAME_T)
	@echo "$(COLOUR_MAG)\nNice! PhoneBook Compiled! $(COLOUR_GREEN)ᕦ$(COLOUR_RED)♥$(COLOUR_GREEN)_$(COLOUR_RED)♥$(COLOUR_GREEN)ᕤ\n$(COLOUR_END)"
	@echo "$(COLOUR_MAG)\nTo start the program type ./minishell\nENJOY!\n$(COLOUR_END)"

unit: ${NAME_T}
	./${NAME_T}

clean:
	@rm -f ${OBJS} ${OBJS_T}
	@echo "$(COLOUR_RED)Deleting all objs! ⌐(ಠ۾ಠ)¬\n$(COLOUR_END)"

fclean: clean
	@rm -f ${NAME}
	@clear
	
re:			fclean all

.PHONY: all clean fclean re 