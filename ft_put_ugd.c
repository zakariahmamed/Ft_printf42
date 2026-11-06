/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ugd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:39:08 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 12:40:50 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ugd(unsigned int n)
{
	int rtv = 0;
	if (n <= 9)
	{
		char c = n + 48;
		int i = ft_putchar(c);
		if (i == -1)
		{
			return (-1);
		}
		rtv += i;
	}
	else
	{
		int j = ft_put_ugd(n / 10);
		int k = ft_put_ugd(n % 10);
		if (j == -1 || k == -1)
		{
			return (-1);
		}
		rtv += j + k;
	}
	return (rtv);
}