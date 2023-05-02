/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguler <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 13:27:05 by eguler            #+#    #+#             */
/*   Updated: 2022/02/19 13:27:38 by eguler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(int c);
int	formats(va_list ap, const char args);
int	ft_printf(const char *args, ...);
int	ft_putstr(char *str);
int	nbrlen(long nbr);
int	ft_putnbr(int nbr);
int	ft_putunsigned(unsigned int nbr);
int	hexlen(unsigned int nbr);
int	ft_putnbr_x(unsigned int nbr, char base);
int	ft_pointer(unsigned long long ptr);

#endif
