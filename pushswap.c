/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:02:19 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 09:50:20 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int	main(int ac, char **av)
{
	t_list	*tmp;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac == 1)
		exit (0);
	ft_cheek(av);
	stack_a = ft_split(av);
	if (ft_lstsize(stack_a) == 1)
		exit (0);
	if (ft_lstsize(stack_a) < 4)
		ft_small_swap(&stack_a);
	tmp = ft_cpy(stack_a);
	ft_alis(tmp, &stack_a, &stack_b, ft_lstsize(tmp));
	ft_dancing(&stack_a, &stack_b);
	return (0);
}
