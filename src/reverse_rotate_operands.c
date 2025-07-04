/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operands.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:04:36 by btigran           #+#    #+#             */
/*   Updated: 2025/07/03 20:13:33 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	ft_out_print("rra\n", 1);
}

void	rrb(t_stack **b)
{
	ft_reverse_rotate(b);
	ft_out_print("rrb\n", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	ft_out_print("rrr\n", 1);
}
