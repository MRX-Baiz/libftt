NAME = libft.a
FLAGS = -Wall -Werror -Wextra
CC = gcc
INC = libft.h
SRC = ft_isalpha.c \
      ft_isprint.c \
      ft_memset.c \
      ft_strlcpy.c \
      ft_toupper.c \
      ft_bzero.c \
      ft_isascii.c \
      ft_memcpy.c \
      ft_strchr.c \
      ft_strlen.c \
      ft_isalnum.c \
      ft_isdigit.c \
      ft_memmove.c \
      ft_strlcat.c \
      ft_tolower.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c  \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c $(INC)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

