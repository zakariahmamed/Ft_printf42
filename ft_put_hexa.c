/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:39:21 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/09 09:16:25 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_subfct(unsigned int n, char dct, int rt)
{
	int	rcp;

	if (n > 9)
	{
		rcp = ft_putchar(dct + (n - 9) - 1);
		if (rcp == -1)
			return (-1);
		rt += rcp;
	}
	else
	{
		rcp = ft_putchar(n + 48);
		if (rcp == -1)
			return (-1);
		rt += rcp;
	}
	return (rt);
}

int	ft_put_hexa(unsigned int n, char c)
{
	int		rt;
	char	dct;
	int		i;
	int		j;

	rt = 0;
	if (c == 'l')
		dct = 'a';
	else
		dct = 'A';
	if (n <= 15)
		rt = ft_subfct(n, dct, rt);
	else
	{
		i = ft_put_hexa(n / 16, c);
		if (i == -1)
			return (-1);
		j = ft_put_hexa(n % 16, c);
		if (j == -1)
			return (-1);
		rt += i + j;
	}
	return (rt);
}
