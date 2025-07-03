/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:04:18 by btigran           #+#    #+#             */
/*   Updated: 2025/07/03 20:14:02 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack **stk)
{
	t_stack	*tmp;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
	{
		return ;
	}
	tmp = *stk;
	*stk = (*stk)->next;
	tmp->next = (*stk)->next;
	(*stk)->next = tmp;
}

void	sa(t_stack **a)
{
	ft_swap(a);
	ft_out_print("sa\n", 1);
}

void	sb(t_stack **b)
{
	ft_swap(b);
	ft_out_print("sb\n", 1);
}

void	ss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_out_print("ss\n", 1);
}
