/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operands_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 20:45:56 by btigran           #+#    #+#             */
/*   Updated: 2025/07/03 22:49:59 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
}

void	rb(t_stack **b)
{
	ft_rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
}
