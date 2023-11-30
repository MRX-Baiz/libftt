
NAME = libft.a
FLAGS = -Wall -Werror -Wextra
CC = cc
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
	  ft_split.c \
	  ft_itoa.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c 
	  
B_SRC = ft_lstnew_bonus.c \
	  ft_lsadd_front_bonus.c \
	  ft_lstsize_bonus.c \
	  ft_lstlast_bonus.c \
	  ft_lstadd_back_bonus.c \
	  ft_lstdelone_bonus.c \
	  ft_lstclear_bonus.c \
	  ft_lstiter_bonus.c \

OBJ = $(SRC:%.c=%.o)

B_OBJ = $(B_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)

	ar rcs $(NAME) $(OBJ)

%.o: %.c $(INC)
	$(CC) $(FLAGS) -c $< -o $@

bonus: $(B_OBJ)
	ar rcs $(NAME) $(B_OBJ)

clean:
	rm -f $(OBJ) $(B_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean all bonus re