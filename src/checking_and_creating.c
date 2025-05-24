/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_and_creating.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:45:21 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/05/24 15:20:30 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_args_create_stack(int argc, char **argv, stack **a)
{
	int		i;
	int		j;
	char	**words;

	i = 0;
	while (i < argc)
	{
		if (ft_strchr(argv[i], ' ') != NULL)
		{
			words = ft_split(argv[i], ' ');
			j = 0;
			while (words[j] != NULL)
			{
				if (ft_check_word(words[j++], a) != 0)
					return (ft_free(words), 1);
			}
			ft_free(words);
		}
		else
		{
			if (ft_check_word(argv[i], a) != 0)
				return (1);
		}
	}
	return (0);
}

int	ft_check_word(char *word, stack **a)
{
	if (ft_check_char(word) == 1)
	{
		return (1);
	}
	if (ft_is_int(word, a) == 1)
	{
		return (1);
	}
	return (0);
}

int	ft_is_int(char *word, stack **a)
{
	long	value;

	value = ft_atoi(word);
	if (value > INT_MAX || value < INT_MIN || ft_check_unique(a, value) == 1)
	{
		ft_free_stack(a);
		return (1);
	}
	if (ft_add_node(a, value) == 1)
	{
		ft_free_stack(a);
		return (1);
	}
	return (0);
}

int	ft_check_char(char *word)
{
	int		j;
	char	c;

	j = 0;
	while (word[j] != '\0')
	{
		c = word[j];
		if (ft_isdigit(c) == 0) //&& c != '-' && c != '+')
		{
			if (j == 0 && (c == '-' || c == '+')) //j != 0 || c != '+' && c != '-' 
				c++;
			else
			{
				return (1);
			}
		}
		j++;
	}
	return (0);
}

int	ft_check_unique(stack *a, int value)
{
	// if (a == NULL)
	// {
	// 	return (1);
	// }
	if (a == NULL)
	{
		return (0);
	}
	while (a != NULL)
	{
		if (a->value == value)
		{
			return (1);
		}
		a = a->next;
	}
	return (0);
}
