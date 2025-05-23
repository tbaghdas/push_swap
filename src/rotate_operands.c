/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:45:56 by btigran           #+#    #+#             */
/*   Updated: 2025/05/23 21:10:46 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(stack **stk)
{
	stack *tmp;
	
	if (stk == NULL || *stk == NULL || *stk->next == NULL)
	{
		return ;
	}
	tmp = *stk;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stk;
	*stk = *stk->next;
}

void	ra(stack **a)
{
	ft_rotate(a);
	ft_out_print("ra");
}

void	rb(stack **b)
{
	ft_rotate(b);
	ft_out_print("rb");
}

void	rr(stack **a, stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_out_print("rr");
}
