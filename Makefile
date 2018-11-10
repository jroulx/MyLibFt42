NAME = libft.a

EXENAME = checker

CC = gcc

FLAGS = -Wall -Wextra -Werror

CHECK = TESTTEST.c

CHECKO = TESTTEST.o


SRC = ft_strcmp.c ft_bzero.c ft_putchar.c   \
	ft_putstr.c ft_memccpy.c ft_memchr.c    \
	ft_memcpy.c ft_memmove.c ft_memset.c    \
	ft_strlen.c ft_memcmp.c ft_strdup.c     \
	ft_strcpy.c ft_strncpy.c ft_strcat.c    \
	ft_strncat.c ft_strlcat.c ft_strchr.c   \


OBJ = ft_strcmp.o ft_bzero.o ft_putchar.o   \
	ft_putstr.o ft_memccpy.o ft_memchr.o    \
	ft_memcpy.o ft_memmove.o ft_memset.o    \
	ft_strlen.o ft_memcmp.o ft_strdup.o     \
	ft_strcpy.o ft_strncpy.o ft_strcat.o    \
	ft_strncat.o ft_strlcat.o ft_strchr.o   \
	

all : TestNoFlag

TestNoFlag : 
	$(CC) -c $(CHECK) $(SRC) 
	$(CC) -o $(EXENAME) $(CHECKO) $(OBJ) 

clean :
	rm -rf $(CHECKO) $(OBJ) 

fclean : clean
	rm -rf $(EXENAME)

re : fclean all