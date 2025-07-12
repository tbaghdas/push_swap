/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:42:37 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/12 14:42:38 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min_pos(t_stack *a)
{
	int		min;
	int		pos;
	int		i;

	if (!a)
		return (-1);
	min = a->value;
	pos = 0;
	i = 0;
	while (a)
	{
		if (a->value < min)
		{
			min = a->value;
			pos = i;
		}
		a = a->next;
		i++;
	}
	return (pos);
}

void	min_to_top(t_stack **a)
{
	int	pos;
	int	size;

	pos = get_min_pos(*a);
	if (pos == -1 || pos == 0)
		return ;
	size = ft_sizeof_stack(*a);
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra(a);
	}
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			rra(a);
	}
}
