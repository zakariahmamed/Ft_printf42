/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:08:55 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 18:53:33 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_set_type1(char c, va_list ap, int rtv)
{
	unsigned int	b;

	if (c == 'u')
	{
		b = va_arg(ap, unsigned int);
		rtv = ft_put_ugd(b);
	}
	else if (c == 'x')
	{
		b = va_arg(ap, unsigned int);
		rtv = ft_put_hexa(b, 'l');
	}
	else if (c == 'X')
	{
		b = va_arg(ap, unsigned int);
		rtv = ft_put_hexa(b, 'U');
	}
	else if (c == '%')
	{
		rtv = ft_putchar(c);
	}
	return (rtv);
}

static int	ft_set_type2(char c, va_list ap, int rtv)
{
	void	*p;
	int		a;
	char	*s;

	if (c == 'c')
	{
		a = va_arg(ap, int);
		rtv = ft_putchar(a);
	}
	else if (c == 's')
	{
		s = va_arg(ap, char *);
		rtv = ft_putstr(s);
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
	return (rtv);
}

int	ft_set_format(char c, va_list ap)
{
	int	rtv;

	rtv = 0;
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i')
	{
		rtv = ft_set_type2(c, ap, rtv);
	}
	else if (c == 'u' || c == 'x' || c == 'X' || c == '%')
	{
		rtv = ft_set_type1(c, ap, rtv);
	}
	return (rtv);
}
