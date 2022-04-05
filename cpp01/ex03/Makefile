CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = UnnecessaryViolence

SOURCES = $(shell find ./srcs -type f -name '*.cpp' -exec basename {} \;)
#SRCS = $(addprefix ./srcs/, $(SOURCES))

OBJECTS = ${SOURCES:.cpp=.o}
OBJS = $(addprefix ./objs/, $(OBJECTS))

HEADER = ./includes
HEADER_FILES = $(shell find $(HEADER) -type f -name '*.hpp')

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
