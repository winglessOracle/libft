# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cwesseli <cwesseli@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/10 09:28:26 by cwesseli      #+#    #+#                  #
#    Updated: 2022/10/25 12:48:05 by cwesseli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= clang
AR			= ar -rsc
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror
OBJ_FILES	=		$(addprefix obj/,ft_isalpha.o ft_strlen.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o\
						ft_toupper.o ft_tolower.o ft_atoi.o ft_bzero.o ft_strncmp.o ft_strlcat.o ft_strlcpy.o\
						ft_memchr.o ft_memcmp.o ft_strchr.o ft_strrchr.o ft_memcpy.o ft_memset.o ft_memmove.o\
						ft_strnstr.o  ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_itoa.o\
						ft_putendl_fd.o ft_putstr_fd.o ft_putchar_fd.o ft_striteri.o ft_strmapi.o ft_split.o\
						ft_putnbr_fd.o ft_lstnew.o ft_lstadd_front.o ft_lstsize.o\
						ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o\
						ft_lstiter.o ft_lstmap.o ft_putchar.o ft_putstr.o ft_isspace.o ft_wordcount.o)
all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $(NAME) $(OBJ_FILES)

$(OBJ_FILES): obj/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	$(RM) obj/

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY:	all clean fclean re
