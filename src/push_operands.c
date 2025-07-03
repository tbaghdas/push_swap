/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:02:45 by btigran           #+#    #+#             */
/*   Updated: 2025/07/03 20:13:14 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp;

	if (dst == NULL || src == NULL || *src == NULL)
	{
		return ;
	}
	if (*dst == NULL)
	{
		*dst = *src;
		tmp = (*src)->next;
		(*src)->next = NULL;
		*src = tmp;
	}
	else
	{
		tmp = (*src)->next;
		(*src)->next = *dst;
		*dst = *src;
		*src = tmp;
	}
}

void	pa(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	ft_out_print("pa\n", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	ft_push(b, a);
	ft_out_print("pb\n", 1);
}
