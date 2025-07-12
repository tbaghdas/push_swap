/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:42:54 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/12 14:42:57 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_to_b(t_stack **a, t_stack **b)
{
	int	i;
	int	size;
	int	chunk;

	i = 0;
	size = ft_sizeof_stack(*a);
	chunk = set_block_size(size);
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + chunk)
		{
			pb(a, b);
			i++;
		}
		else
		{
			ra(a);
		}
	}
}

void	push_to_a(t_stack **a, t_stack **b)
{
	int	pos;
	int	len;

	while (*b)
	{
		len = ft_sizeof_stack(*b);
		pos = max_pos(b);
		if (pos <= len / 2)
		{
			while (pos-- > 0)
				rb(b);
		}
		else
		{
			while (pos++ < len)
				rrb(b);
		}
		pa(a, b);
	}
}

void	ft_sort_stack(t_stack **a, t_stack **b)
{
	int	size;

	if (ft_checker(*a, *b) == 0)
	{
		return ;
	}
	size = ft_sizeof_stack(*a);
	if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
	else
	{
		indexing(a);
		push_to_b(a, b);
		push_to_a(a, b);
	}
}
