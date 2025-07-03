/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operands_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:04:36 by btigran           #+#    #+#             */
/*   Updated: 2025/07/03 22:49:50 by btigran          ###   ########.fr       */
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
