/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:52:25 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 12:52:13 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		rt_value;
	int		rcp;
	char	charset[] = "cspdiuxX%";
	va_list	ap;

	i = 0;
	rt_value = 0;
	if (!format)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_ischarset(charset, format[i + 1]))
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
	va_end(ap);
	return (rt_value);
}
