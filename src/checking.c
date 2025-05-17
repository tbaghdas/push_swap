/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:45:21 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/05/18 00:08:30 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_args(int argc, char **argv)
{
	if (ft_check_char(argc, **argv) ==  1)
	{
		return (1);
	}
	if (ft_is_int(argc, argv) == 1)
	{
		return (1);
	}
	return (0);
}

int	ft_is_int(int argc, char **argv)
{
	int	i;
	int	j;
	int	value;
	
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		if (value > INT_MAX || value < INT_MIN)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_char(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];
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
		i++;
	}
	return (0);
}
