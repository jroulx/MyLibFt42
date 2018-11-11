NAME = libft.a

EXENAME = checker

CC = gcc

FLAGS = -Wall -Wextra -Werror

CHECK = TESTTEST.c

CHECKO = TESTTEST.o


SRC = ft_strcmp.c ft_bzero.c ft_putchar.c    \
	ft_putstr.c ft_memccpy.c ft_memchr.c     \
	ft_memcpy.c ft_memmove.c ft_memset.c     \
	ft_strlen.c ft_memcmp.c ft_strdup.c      \
	ft_strcpy.c ft_strncpy.c ft_strcat.c     \
	ft_strncat.c ft_strlcat.c ft_strchr.c    \
	ft_strrchr.c ft_strstr.c ft_strnstr.c    \
	ft_strncmp.c ft_atoi.c ft_putnbr_fd.c    \
	ft_putchar_fd.c ft_putnbr.c ft_isalpha.c \
	ft_isdigit.c ft_isalnum.c ft_isascii.c   \
	ft_isprint.c ft_toupper.c ft_tolower.c   \



OBJ = ft_strcmp.o ft_bzero.o ft_putchar.o    \
	ft_putstr.o ft_memccpy.o ft_memchr.o     \
	ft_memcpy.o ft_memmove.o ft_memset.o     \
	ft_strlen.o ft_memcmp.o ft_strdup.o      \
	ft_strcpy.o ft_strncpy.o ft_strcat.o     \
	ft_strncat.o ft_strlcat.o ft_strchr.o    \
	ft_strrchr.o ft_strstr.o ft_strnstr.o    \
	ft_strncmp.o ft_atoi.o ft_putnbr_fd.o    \
	ft_putchar_fd.o ft_putnbr.o ft_isalpha.o \
	ft_isdigit.o ft_isalnum.o ft_isascii.o   \
	ft_isprint.o ft_toupper.o ft_tolower.o   \

all : TestNoFlag

TestNoFlag : 
	$(CC) -c $(CHECK) $(SRC) 
	$(CC) -o $(EXENAME) $(CHECKO) $(OBJ) 

clean :
	rm -rf $(CHECKO) $(OBJ) 

fclean : clean
	rm -rf $(EXENAME)

re : fclean all