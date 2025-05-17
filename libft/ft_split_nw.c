/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:06:58 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/02/11 13:19:46 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
headery
static int	words_count(char const *s, char c)
{
	char	flag;
	int		count;
	int		i;

	i = 0;
	count = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] != c && flag)
		{
			count++;
			flag = 0;
		}
		else if (s[i] == c)
			flag = 1;
		i++;
	}
	return (count);
}

static int	get_size(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] && s[i++] != c)
		++count;
	return (count);
}

static void	free_mem(char **strs, int i)
{
	while (i >= 0)
		free(strs[i--]);
	free(strs);
}

static void	gen_strs(char **strs, char const *s, char c, int *arr)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (s[i] && arr[1] < arr[0] && (arr[1] + 1 != arr[0] || s[i] != c))
	{
		if (s[i] == c || arr[1] == -1)
		{
			while (s[i] == c)
				++i;
			k = 0;
			strs[arr[1]] = (char *) malloc(
					(get_size(s + i, c) + 1) * sizeof(char));
			if (!strs[arr[1]])
			{
				free_mem(strs, arr[1] - 1);
				return ;
			}
		}
		strs[arr[1]][k++] = s[i++];
		if (arr[1] != -1 && s[i] == c)
			strs[arr[1]][k] = '\0';
	}
	strs[arr[0]] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		count;
	int		arr[2];

	arr[1] = -1;
	if (!s)
		return (NULL);
	count = words_count(s, c);
	if (count == 0)
	{
		strs = (char **) malloc(sizeof(char *));
		if (!strs)
			return (strs);
		strs[0] = NULL;
		return (strs);
	}
	strs = (char **) malloc((count + 1) * sizeof(char *));
	if (!strs)
		return (strs);
	arr[0] = count;
	gen_strs(strs, s, c, arr);
	return (strs);
}
/*
#include <stdio.h>

int	main(int c, char **a)
{
	c++;
	char **j = ft_split(a[1], a[2][0]);
	for(int i = 0;j[i];i++){
		printf("%s\n", j[i]);
	}
	// if (j)
	// 	free_mem(j, 10);
}
*/