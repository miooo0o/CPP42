# Alias
CXX			= c++
VERSION		= -std=c++98
CXXFLAGS	= -Wall -Werror -Wextra $(VERSION)
RM			= rm

# standard
NAME		=	animal
TARGET		=	./$(NAME)
OBJS_DIR	=	./obj/
SRCS_DIR	=	./src/
INCLUDE		=	-I./include -I./src
#LIBS_DIR	=	./lib/

# sources
SRCS		=	$(SRCS_DIR)main.cpp \
				$(SRCS_DIR)AAnimal/AAnimal.cpp \
				$(SRCS_DIR)Dog/Dog.cpp \
				$(SRCS_DIR)Cat/Cat.cpp \
				$(SRCS_DIR)Brain/Brain.cpp

OBJS		=	$(patsubst $(SRCS_DIR)%.cpp, $(OBJS_DIR)%.o, $(SRCS))

# Main Command
all: $(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(INCLUDE) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Makefile: $(TARGET) compiled."

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	@mkdir -p $(@D)
	@#echo "compiling $<"
	@$(CXX) $(INCLUDE) -c $< -o $@

clean:
	@$(RM) -rf $(OBJS_DIR)

fclean:		clean
	@$(RM) -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re