/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:11:26 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 12:40:52 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_adp(unsigned long n)
{
	int rt = 0;
	int rcp;
	char c = 'a';
	if (n <= 15)
	{
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
	}
	else
	{
		int i = ft_put_adp(n / 16);
		int j = ft_put_adp(n % 16);
		if (i == -1 || j == -1)
		{
			return (-1);
		}
		rt += i + j;
	}
	return (rt);
}