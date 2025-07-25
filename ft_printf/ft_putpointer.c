/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:20:21 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/24 14:17:46 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	pointernbr(size_t adress, int *count)
{
	char			*base;

	base = "0123456789abcdef";
	if (adress >= 16)
		pointernbr(adress / 16, count);
	*count += ft_putchar (base[adress % 16]);
}

void	ft_putpointer(size_t adress, int *count)
{
	if (!adress)
	{
		*count += ft_putstr("(nil)");
		return ;
	}
	*count += ft_putstr("0x");
	pointernbr(adress, count);
}
