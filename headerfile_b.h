/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile_b.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:09:37 by idabligi          #+#    #+#             */
/*   Updated: 2023/02/14 15:15:28 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERFILE_B_H
# define HEADERFILE_B_H

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

void	ft_write_error4_b(t_list *head, t_list *head2);
int		ft_lstsize_b(t_list *lst);
void	ft_reverse_b(t_list **head);
void	ft_rotate_b(t_list **head);
void	ft_push_b(t_list **receive, t_list **sent);
void	ft_swap_b(t_list **head);
long	ft_atoi_b(char *str, int i);
void	ft_cheek_duplicate_b(t_list *head);
t_list	*ft_lstnew_b(int content);
t_list	*ft_lstlast_b(t_list *lst);
void	ft_lstdel_b(t_list **head);
t_list	*ft_lstadd_back_b(t_list *lst, t_list *new);
void	ft_write_error_b(t_list *head);
void	ft_cheek_b(char **str);
t_list	*ft_split_b(char **str);
int		ft_strcmp(const char *s1, const char *s2);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_execute(char *save, t_list **stack_a, t_list **stack_b);
int		ft_final_cheek(t_list *stack_a);

#endif