# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Pierre <Pierre@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 14:30:42 by pgerbaud          #+#    #+#              #
#    Updated: 2018/01/23 11:57:35 by pgerbaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CFLAGS=-Wall -Wextra -Werror

SRC = 	ft_atoi.c \
		ft_atoimax.c \
		ft_bzero.c \
		ft_imaxtoa.c \
		ft_imaxtoa_base.c \
		ft_inttabclr.c \
		ft_inttabdisplay.c \
		ft_inttabfind.c \
		ft_iprintsize.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isnumber.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_putstr_fdret.c \
		ft_straddinstr.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strcut.c \
		ft_strdel.c \
		ft_strdelinside.c \
		ft_strdelret.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_strfill.c \
		ft_strfind.c \
		ft_strisnumber.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strjoinfree.c \
		ft_strjoinfreefirst.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strmchr.c \
		ft_strmintchr.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strsplit.c \
		ft_strstr.c \
		ft_strsub.c \
		ft_strtrim.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_uimaxtoa.c \
		ft_uimaxtoa_base.c \
		ft_uiprintsize.c

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
