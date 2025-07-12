/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:42:29 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/12 14:42:33 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	indexing(t_stack **stk)
{
	int		index;
	t_stack	*current;
	t_stack	*target;

	current = *stk;
	while (current)
	{
		index = 0;
		target = *stk;
		while (target)
		{
			if (current->value > target->value)
				index++;
			target = target->next;
		}
		current->index = index;
		current = current->next;
	}
}

int	max_pos(t_stack **stk)
{
	int		i;
	int		pos;
	t_stack	*tmp;
	int		max_index;

	i = 0;
	pos = 0;
	tmp = *stk;
	max_index = tmp->index;
	while (tmp)
	{
		if (tmp->index > max_index)
		{
			max_index = tmp->index;
			pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

int	set_block_size(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
		i++;
	return (i);
}
