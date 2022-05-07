CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = iter
SOURCES = main.cpp
#SRCS = $(addprefix ./srcs/, $(SOURCES))

OBJECTS = ${SOURCES:.cpp=.o}
OBJS = $(addprefix ./objs/, $(OBJECTS))

HEADER_DIR = ./includes/
HEADER_FILES = main.hpp iter.hpp
HEADERS = $(addprefix $(HEADER_DIR), $(HEADER_FILES))

DEPENDENCIES = ${OBJS:.o=.d}
all : $(NAME)

$(NAME) :	$(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean : 
		rm -f $(OBJS) $(DEPENDENCIES)
		rm -rf ./objs

fclean : clean 
		rm -f $(NAME)

re :	fclean all

./objs/%.o :	./srcs/%.cpp $(HEADERS)
		mkdir -p objs
		$(CC) $(FLAGS) -MMD -I $(HEADER_DIR) -o $@ -c $<

.PHONY : all re clean fclean
