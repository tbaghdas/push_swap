/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:31:48 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/12 17:42:48 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_add_node(t_stack **stk, int value)
{
	t_stack	*new_node;
	t_stack	*tmp;

	if (stk == NULL)
		return (1);
	new_node = (t_stack *) malloc(sizeof(t_stack));
	if (new_node == NULL)
		return (1);
	new_node->value = value;
	new_node->next = NULL;
	if (*stk != NULL)
	{
		tmp = *stk;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	else
	{
		*stk = new_node;
	}
	return (0);
}

void	ft_out_print(char *out_txt, int fd)
{
	write(fd, out_txt, ft_strlen(out_txt));
}

int	ft_sizeof_stack(t_stack *stk)
{
	int	count;

	count = 0;
	if (stk == NULL)
	{
		return (count);
	}
	count++;
	while (stk->next != NULL)
	{
		count++;
		stk = stk->next;
	}
	return (count);
}

int	ft_checker(t_stack *a, t_stack *b)
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
	while (a != NULL)
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
