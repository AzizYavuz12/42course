/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:08:31 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/09 16:43:40 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && !flag)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static void	ft_free(char **str, int count)
{
	int	i;

	i = 0;
	while (i <= count)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	*allocate_word(const char *s, char c)
{
	int		length;
	char	*sub_string;
	int		i;

	length = 0;
	while (s[length] && s[length] != c)
		length++;
	sub_string = (char *)malloc(sizeof(char) * (length + 1));
	if (!sub_string)
		return (NULL);
	i = 0;
	while (i < length)
	{
		sub_string[i] = s[i];
		i++;
	}
	sub_string[length] = '\0';
	return (sub_string);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str[i] = allocate_word(s, c);
			if (!str[i])
				return (ft_free(str, i - 1), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	str[i] = NULL;
	return (str);
}
