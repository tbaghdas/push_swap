/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:45:56 by btigran           #+#    #+#             */
/*   Updated: 2025/07/03 20:38:00 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_stack **stk)
{
	t_stack	*tmp;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
	{
		return ;
	}
	tmp = *stk;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *stk;
	tmp = *stk;
	*stk = (*stk)->next;
	tmp->next = NULL;
}

void	ra(t_stack **a)
{
	ft_rotate(a);
	ft_out_print("ra\n", 1);
}

void	rb(t_stack **b)
{
	ft_rotate(b);
	ft_out_print("rb\n", 1);
}

void	rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_out_print("rr\n", 1);
}
