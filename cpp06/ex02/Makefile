CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = base

SOURCES = Base.cpp  generate.cpp  main.cpp
#SRCS = $(addprefix ./srcs/, $(SOURCES))

OBJECTS = ${SOURCES:.cpp=.o}
OBJS = $(addprefix ./objs/, $(OBJECTS))

HEADER = ./includes
HEADER_FILES = A.hpp  Base.hpp  B.hpp  C.hpp

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

./objs/%.o :	./srcs/%.cpp $(HEADER_FILES)
		mkdir -p objs
		$(CC) $(FLAGS) -MMD -I $(HEADER) -o $@ -c $<

.PHONY : all re clean fclean
