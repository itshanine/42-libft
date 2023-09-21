# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hanjebou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 12:46:05 by hanjebou          #+#    #+#              #
#    Updated: 2023/09/21 14:32:42 by hanjebou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#VARIABLES

NAME 		= libft.a
CC 			= gcc
RM 			= rm -f
CCFLAGS 	= -Wall -Wextra -Werror

SRCS 		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			  ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
			  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			  ft_strdup.c ft_calloc.c ft_atoi.c ft_putchar_fd.c \
			  ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
			  ft_striteri.c ft_substr.c ft_strmapi.c ft_strjoin.c \
			  ft_split.c ft_strtrim.c ft_itoa.c 

#COLORS

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#SOURCE

OBJS 		= ${SRCS:.c=.o}

BONUS 		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			  ft_lstadd_back.c ft_lstiter.c ft_lstdelone.c ft_lstclear.c \
			  ft_lstmap.c

BONUS_OBJS 	= ${BONUS:.c=.o}

$(NAME):	$(OBJS)
			@ar rcs $(NAME) $(OBJS)
			@echo "$(GREEN)➤ libft compiled !$(DEF_COLOR)"

all:        $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c $< -o $@ 

clean:
			@$(RM) $(OBJS) $(BONUS_OBJS)
			@echo "$(YELLOW)➤ libft object files cleaned !$(DEF_COLOR)"

fclean:		clean
			@$(RM) $(NAME)
			@echo "$(YELLOW)➤ libft executable files cleaned !$(DEF_COLOR)"

re:			fclean $(NAME)
			@echo "$(CYAN)➤ Cleaned and rebuilt libft !$(DEF_COLOR)"

bonus:		$(OBJS) $(BONUS_OBJS)
			@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
			@echo "$(GREEN)➤ libft compiled ! (with bonus)$(DEF_COLOR)"

.PHONY:		all clean fclean re bonus
