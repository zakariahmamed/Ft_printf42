/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:08:55 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 12:40:47 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_set_format(char c, va_list ap)
{
	int				rtv;
	char			*p;
	void			*p;
	int				a;
	unsigned int	c;
	unsigned int	c;
	unsigned int	c;

	if (c == 'c')
	{
		int ch = va_arg(ap, int);
			// a cause des promotions faites par le prologue
		rtv = ft_putchar(ch);
	}
	else if (c == 's')
	{
		p = va_arg(ap, char *);
		rtv = ft_putstr(p);
	}
	else if (c == 'p')
	{
		p = va_arg(ap, void *);
		rtv = ft_put_pointer(p);
	}
	else if (c == 'd' || c == 'i')
	{
		a = va_arg(ap, int);
		rtv = ft_putnbr(a);
	}
	else if (c == 'u')
	{
		c = va_arg(ap, unsigned int);
		rtv = ft_put_ugd(c);
	}
	else if (c == 'x')
	{
		c = va_arg(ap, unsigned int);
		rtv = ft_put_hexa(c, 'l');
	}
	else if (c == 'X')
	{
		c = va_arg(ap, unsigned int);
		rtv = ft_put_hexa(c, 'U');
	}
	else if (c == '%')
	{
		rtv = ft_putchar(c);
	}
	return (rtv);
}
