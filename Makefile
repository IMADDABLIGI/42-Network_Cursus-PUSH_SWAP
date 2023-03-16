# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/22 15:08:48 by idabligi          #+#    #+#              #
#    Updated: 2023/01/27 14:22:51 by idabligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME2 = checker

CC = CC
FLAGS = -Wall -Wextra -Werror
RM = rm -f
HEADER = headerfile.h
HEADER2 = headerfile_b.h

FLS = pushswap lstadd_back lstdel lstlast lstnew lstsize rotate reverse ft_cpy\
	ft_push ft_atoi ft_split ft_cheek ft_cheek_duplicate ft_write_error ft_smalest_a swap\
	ft_smalest ft_lis fill ft_getnumbers ft_lis2 ft_write_error2 actionss ft_lastdance\
	ft_getmax ft_write_error3 ft_free ft_pushlis ft_dance ft_pos actions actionsss ft_short_count ft_small_swap\

FLS_B =  checker get_next_line get_next_line_utils ft_strcmp ft_cheek_b ft_split_b lstadd_back_b ft_write_error_b ft_final_cheek\
	lstdel_b lstlast_b lstnew_b ft_atoi_b ft_cheek_duplicate_b swap_b ft_push_b rotate_b reverse_b ft_execute lstsize_b ft_write_error4_b\

FO = $(FLS:=.o)

FOB = $(FLS_B:=.o)

all : $(NAME)

$(NAME) : $(FO) $(HEADER)
	$(CC) $(FLAGS) $(FO) -o $(NAME)

bonus : $(FOB) $(HEADER2)
	$(CC) $(FLAGS) $(FOB) -o $(NAME2)

%.o : %.c $(HEADER) $(HEADER2)
	$(CC) -c $(FLAGS) $<

clean :
	$(RM) $(FO) $(FOB)

fclean : clean
	$(RM) $(NAME) $(NAME2)

re : fclean all

.PHONY : all clean fclean re