/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:52:25 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 15:58:00 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_get_cases(const char *format, va_list ap, int rt_value)
{
	size_t	i;
	int		rcp;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_ischarset("cspdiuxX%", format[i + 1]))
		{
			rcp = ft_set_format(format[i + 1], ap);
			if (rcp == -1)
				return (-1);
			rt_value += rcp;
			i += 2;
		}
		else
		{
			rcp = ft_putchar(format[i]);
			if (rcp == -1)
				return (-1);
			rt_value += rcp;
			i++;
		}
	}
	return (rt_value);
}

int	ft_printf(const char *format, ...)
{
	int		rt_value;
	va_list	ap;

	rt_value = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	rt_value = ft_get_cases(format, ap, rt_value);
	va_end(ap);
	return (rt_value);
}
