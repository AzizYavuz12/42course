/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:01:16 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/02 13:01:16 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (!src && !dest)
		return (dest);
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			dest1[i - 1] = src1[i - 1];
			i--;
		}
		return (dest);
	}
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}
