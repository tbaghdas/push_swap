/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:04:18 by btigran           #+#    #+#             */
/*   Updated: 2025/05/24 15:34:46 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(stack **stk)
{
	stack *tmp;
	
	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
	{
		return ;
	}
	tmp = *stk;
	*stk = (*stk)->next;
	tmp->next = (*stk)->next;
	(*stk)->next = tmp;
}

void	sa(stack **a)
{
	ft_swap(a);
	ft_out_print("sa");
}

void	sb(stack **b)
{
	ft_swap(b);
	ft_out_print("sb");
}

void	ss(stack **a, stack **b)
{
	ft_swap(a);
	ft_swap(b);
	ft_out_print("ss");
}
