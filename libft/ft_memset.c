/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:01:24 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/02 13:01:24 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ch;
	size_t			len;

	len = 0;
	ch = (unsigned char *)s;
	while (len < n)
	{
		ch[len] = c;
		len++;
	}
	return (s);
}
