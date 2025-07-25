/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:11:19 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/22 18:13:25 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsginednbr(unsigned int n, int *count)
{
	if (n >= 10)
		ft_unsginednbr(n / 10, count);
	*count += ft_putchar(n % 10 + '0');
}
