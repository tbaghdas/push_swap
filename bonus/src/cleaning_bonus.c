/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaning_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:42:02 by btigran           #+#    #+#             */
/*   Updated: 2025/07/03 18:40:02 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_free(char **words)
{
	int	i;

	if (words == NULL)
	{
		return ;
	}
	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

void	ft_free_stack(t_stack **stk)
{
	t_stack	*tmp;

	if (stk == NULL)
	{
		return ;
	}
	while (*stk != NULL)
	{
		tmp = (*stk)->next;
		free(*stk);
		*stk = tmp;
	}
}
