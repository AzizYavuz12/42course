/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:25:33 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/04 11:19:33 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	i;
	unsigned int	len;
	unsigned int	k;

	i = 0;
	len = ft_strlen(s1);
	k = 0;
	if (!s1)
		return (NULL);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	if (i > len)
		return (ft_strdup(""));
	trim = (char *)malloc(len - i + 1);
	if (!trim)
		return (NULL);
	while (i < len)
		trim[k++] = s1[i++];
	trim[k] = '\0';
	return (trim);
}
