/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operands_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:31:10 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/12 14:45:55 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

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
}

void	pb(t_stack **a, t_stack **b)
{
	ft_push(b, a);
}
