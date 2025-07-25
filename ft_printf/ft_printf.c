/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:50:03 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/24 13:34:53 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list args, const char format)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		counter += ft_putchar(va_arg(args, int));
	else if (format == 's')
		counter += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), &counter);
	else if (format == '%')
		counter += ft_putchar('%');
	else if (format == 'u')
		ft_unsginednbr(va_arg(args, unsigned int), &counter);
	else if (format == 'x' || format == 'X')
		ft_puthex(format, va_arg(args, unsigned int), &counter);
	else if (format == 'p')
		ft_putpointer(va_arg(args, size_t), &counter);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		word_len;

	va_start(args, format);
	i = 0;
	word_len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			word_len += check_format(args, format[i]);
			i++;
		}
		else
		{
			word_len += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (word_len);
}
