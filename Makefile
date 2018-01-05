# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Pierre <Pierre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 14:30:42 by pgerbaud          #+#    #+#              #
#    Updated: 2018/01/05 13:43:08 by pgerbaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CFLAGS=-Wall -Wextra -Werror
SRCS=srcs/
SRC= 	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_straddinstr.c\
		ft_strlen.c\
		ft_strfind.c\
		ft_strcat.c\
		ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strcut.c\
		ft_strdup.c\
		ft_strfill.c\
		ft_strncpy.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strrchr.c\
		ft_strmchr.c\
		ft_strmintchr.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_atoi.c\
		ft_iprintsize.c\
		ft_uiprintsize.c\
		ft_imaxtoa_base.c\
		ft_uimaxtoa_base.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strdelret.c\
		ft_strdelinside.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strjoinfree.c\
		ft_strjoinfreefirst.c\
		ft_strtrim.c\
		ft_strsplit.c\
		ft_itoa.c\
		ft_imaxtoa.c\
		ft_uimaxtoa.c\
		ft_putchar.c\
		ft_putstr.c\
		ft_putendl.c\
		ft_putnbr.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c

INC=./includes

OBJ=${SRC:.c=.o}

all : $(NAME)

$(NAME) :
	gcc -c $(SRC) -I$(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
