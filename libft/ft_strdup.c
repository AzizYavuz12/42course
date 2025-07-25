/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:31:40 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/02 15:37:52 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*temp;
	int		i;

	len = ft_strlen(s);
	i = 0;
	temp = malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	while (i < len)
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
