/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operands_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:31:22 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/12 14:31:25 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_reverse_rotate(t_stack **stk)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
	{
		return ;
	}
	tmp = *stk;
	while ((*stk)->next != NULL)
	{
		prev = *stk;
		*stk = (*stk)->next;
	}
	(*stk)->next = tmp;
	prev->next = NULL;
}

void	rra(t_stack **a)
{
	ft_reverse_rotate(a);
}

void	rrb(t_stack **b)
{
	ft_reverse_rotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
}
