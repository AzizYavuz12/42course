/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azyavuz <azyavuz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 12:51:35 by azyavuz           #+#    #+#             */
/*   Updated: 2025/07/24 14:16:32 by azyavuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
void	ft_putnbr(int n, int *count);
void	ft_unsginednbr(unsigned int n, int *count);
void	ft_puthex(char format, unsigned int n, int *count);
void	ft_putpointer(size_t adress, int *count);

#endif
