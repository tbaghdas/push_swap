/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:30:33 by btigran           #+#    #+#             */
/*   Updated: 2025/05/24 15:40:11 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_checker(stack *a, stack *b)
{
	int	prev;
	
	if (a == NULL || b != NULL)
	{
		return (1);
	}
	if (a->next == NULL)
	{
		return (0);
	}
	prev = a->value;
	a = a->next;
	while(a->next != NULL)
	{
		if (prev > a->value)
		{
			return (1);
		}
		prev = a->value;
		a = a->next;
	}
	return (0);
}
