/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 14:27:34 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/06/14 17:11:21 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
}

static size_t	ft_size_of_mem(char *s, char c)
{
	size_t	count;
	size_t	in_string;

	count = 0;
	in_string = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			in_string = 0;
		else
		{
			if (!in_string)
			{
				in_string = 1;
				count++;
			}
		}
		s++;
	}
	return (count);
}

static int	ft_free_mem(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (1);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	if (start >= len_s)
		len = 0;
	if (len_s - start < len)
		len = len_s - start;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *s, char c)
{
	char	**res;
	char	*start;
	size_t	i;

	res = (char **)malloc((ft_size_of_mem((char *)s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		start = (char *)s;
		while (*s && *s != c)
			s++;
		res[i] = ft_substr(start, 0, s - start);
		if (!res[i] && ft_free_mem(res))
			return (NULL);
		i++;
	}
	res[i] = NULL;
	return (res);
}
