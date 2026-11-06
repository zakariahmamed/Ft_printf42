/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:11:26 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 18:15:31 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_case1(unsigned long n, int rt, char c)
{
	int	rcp;

	if (n <= 9)
	{
		rcp = ft_putchar(n + 48);
		if (rcp == -1)
		{
			return (-1);
		}
		rt += rcp;
	}
	else
	{
		rcp = ft_putchar(c + (n - 9) - 1);
		if (rcp == -1)
		{
			return (-1);
		}
		rt += rcp;
	}
	return (rt);
}

int	ft_put_adp(unsigned long n)
{
	int		rt;
	char	c;
	int		i;
	int		j;

	rt = 0;
	c = 'a';
	if (n <= 15)
	{
		rt = ft_case1(n, rt, c);
	}
	else
	{
		i = ft_put_adp(n / 16);
		j = ft_put_adp(n % 16);
		if (i == -1 || j == -1)
		{
			return (-1);
		}
		rt += i + j;
	}
	return (rt);
}
