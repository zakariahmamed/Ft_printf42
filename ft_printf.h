/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:53:29 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 18:10:36 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_set_format(char c, va_list ap);
int	ft_ischarset(char *str, char c);
int	ft_putnbr(long int nbr);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_put_ugd(unsigned int n);
int	ft_put_hexa(unsigned int n, char c);
int	ft_put_pointer(void *p);
int	ft_put_adp(unsigned long n);

#endif
