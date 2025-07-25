/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 16:06:45 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/02 16:16:19 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (j < ft_strlen(little))
		{
			if (big[i + j] == little[j] && (i + j < len))
			{
				if (j == ft_strlen(little) - 1)
					return ((char *)big + i);
				j++;
			}
			else
				break ;
		}
		i++;
	}
	return (NULL);
}
