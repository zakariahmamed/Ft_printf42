/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:07:41 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 12:40:48 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long int nbr)
{
	int		n;
	int		r;
	char	sign;
	char	c;
	int		i;
	int		j;

	n = 0;
	if (nbr < 0)
	{
		sign = '-';
		r = ft_putchar(sign);
		if (r == -1)
		{
			return (-1);
		}
		n += r;
		nbr = -nbr;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		c = nbr + 48;
		r = ft_putchar(c);
		if (r == -1)
		{
			return (-1);
		}
		n += r;
	}
	else
	{
		i = ft_putnbr(nbr / 10);
		j = ft_putnbr(nbr % 10);
		if (i == -1 || j == -1)
		{
			return (-1);
		}
		n += i + j;
	}
	return (n);
}
