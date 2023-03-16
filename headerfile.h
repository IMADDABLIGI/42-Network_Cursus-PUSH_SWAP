/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:05:17 by idabligi          #+#    #+#             */
/*   Updated: 2023/02/14 15:15:09 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERFILE_H
# define HEADERFILE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				tatto;
	int				pos_a;
	int				pos_b;
	struct s_list	*next;
}	t_list;

void	ft_small_swap(t_list **stack_a);
void	ft_action1(t_list **stack_a, t_list **stack_b, int pos_a, int pos_b);
void	ft_action2(t_list **stack_a, t_list **stack_b, int pos_a, int pos_b);
void	ft_action3(t_list **stack_a, t_list **stack_b, int pos_a, int pos_b);
void	ft_action4(t_list **stack_a, t_list **stack_b, int pos_a, int pos_b);
void	ft_action1_1(t_list **stack_a, t_list **stack_b, int min, int rest);
void	ft_action1_0(t_list **stack_a, t_list **stack_b, int a, int b);
void	ft_action1_2(t_list **stack_a, t_list **stack_b, int min, int rest);
void	ft_action4_0(t_list **stack_a, t_list **stack_b, int pos_a);
void	ft_action4_1(t_list **stack_a, t_list **stack_b, int min, int rest);
void	ft_action4_2(t_list **stack_a, t_list **stack_b, int min, int rest);
int		ft_countbest(int a, int b);
int		ft_countbests(int a, int b);
t_list	*ft_smalest_a(t_list *head);
void	ft_dancing(t_list **stack_a, t_list **stack_b);
int		ft_max_ab(t_list *head);
int		ft_pos(int num, t_list *stack_a);
void	ft_dance(t_list *stack_a, t_list *stack_b);
void	ft_free(t_list *tmp, int *str, int *ntr);
int		*getnumbers(int *str, int *ntr, int index, t_list *head);
int		*fullofone(int size);
int		*fullofzero(int size);
void	ft_alis(t_list *tmp, t_list **stack_a, t_list **stack_b, int size);
int		*ft_lis2(int *str, int size, t_list *head);
void	ft_write_error2(t_list *head, t_list *head2, int *str, int *ntr);
void	ft_write_error3(t_list *head, t_list *head2, int *str, int *ntr);
int		ft_getmax(t_list *head, t_list *atr, int *str);
void	ft_pushlis(t_list **stack_a, t_list **stack_b, int *ltr, int size);
t_list	*ft_cpy(t_list *head);
t_list	*ft_smalest(t_list *head);
void	ft_cheek(char **str);
t_list	*ft_split(char **str);
void	ft_swap(t_list **head);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_rotate(t_list **head);
void	ft_reverse(t_list **head);
void	ft_lstdel(t_list **head);
long	ft_atoi(char *str, int c);
void	ft_write_error(t_list *head);
void	ft_cheek_duplicate(t_list *head);
void	ft_push(t_list **receive, t_list **sent);
t_list	*ft_lstadd_back(t_list *lst, t_list *new);

#endif