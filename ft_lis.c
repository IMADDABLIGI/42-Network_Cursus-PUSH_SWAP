/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:05:17 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 10:31:32 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static int	*ft_lis(t_list *head, t_list *atr, int *str, int *ntr)
{
	t_list	*ptr;
	int		i;
	int		j;

	i = 1;
	ptr = head;
	while (ptr->next)
	{
		ptr = head;
		j = 0;
		while (j != i)
		{
			if (ptr->content < atr->content && (str[j] + 1) >= str[i])
			{
				str[i] = (str[j] + 1);
				ntr[i] = j;
			}
			ptr = ptr->next;
			j++;
		}
		atr = atr->next;
		i++;
	}
	return (getnumbers(str, ntr, (i - 1), head));
}

void	ft_alis(t_list *tmp, t_list **stack_a, t_list **stack_b, int size)
{
	t_list	*atr;
	int		*str;
	int		*ntr;
	int		*ltr;
	int		max;

	*stack_b = NULL;
	atr = tmp->next;
	str = fullofone(size);
	ntr = fullofzero(size);
	if (!str || !ntr)
		ft_write_error2(*stack_a, tmp, str, ntr);
	ltr = ft_lis(tmp, atr, str, ntr);
	if (!ltr)
		ft_write_error3(*stack_a, tmp, str, ntr);
	max = ft_getmax(tmp, atr, str);
	ft_free(tmp, str, ntr);
	ft_pushlis(stack_a, stack_b, ltr, max);
}
