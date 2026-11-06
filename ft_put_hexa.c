/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:39:21 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 12:40:51 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa(unsigned int n, char c)
{
	int rt = 0;
	int rcp;
	char dct;
	if (c == 'l')
	{
		dct = 'a';
	}
	else
	{
		dct = 'A';
	}
	if (n <= 15)
	{
		if (n > 9)
		{
			rcp = ft_putchar(dct + (n - 9) - 1);
			if (rcp == -1)
			{
				return (-1);
			}
			rt += rcp;
		}
		else
		{
			rcp = ft_putchar(n + 48);
			if (rcp == -1)
			{
				return (-1);
			}
			rt += rcp;
		}
	}
	else
	{
		int i = ft_put_hexa(n / 16, c);
		int j = ft_put_hexa(n % 16, c);
		if (i == -1 || j == -1)
		{
			return (-1);
		}
		rt += i + j;
	}
	return (rt);
}