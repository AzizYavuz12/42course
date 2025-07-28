/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 15:59:31 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/25 16:53:45 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE	10

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*old_data;
	ssize_t		reading;
	int			n;

	n = 1;
	while (n)
	{
		reading = read(fd, buffer, BUFFER_SIZE);
		if (reading == -1)
			return ;
		n = ft_strchr(buffer);
		old_data = ft_strjoin(old_data, buffer);
	}
	
}
