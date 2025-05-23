/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operands.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:04:36 by btigran           #+#    #+#             */
/*   Updated: 2025/05/23 21:13:16 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(stack **stk)
{
	stack *tmp;
	stack *prev;
	
	if (stk == NULL || *stk == NULL || *stk->next == NULL)
	{
		return ;
	}
	tmp = *stk;
	while (*stk->next != NULL)
	{
		prev = *stk;
		*stk = *stk->next;
	}
	*stk->next = tmp;
	prev->next = NULL;
}

void	rra(stack **a)
{
	ft_reverse_rotate(a);
	ft_out_print("rra");
}

void	rrb(stack **b)
{
	ft_reverse_rotate(b);
	ft_out_print("rrb");
}

void	rrr(stack **a, stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_out_print("rrr");
}
