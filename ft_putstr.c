/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:08:13 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 18:32:31 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		n;
	int		r;
	size_t	i;

	n = 0;
	i = 0;
	if (!str)
	{
		r = ft_putstr("(null)");
		if (r == -1)
			return (-1);
		n += r;
	}
	while (str && str[i])
	{
		r = ft_putchar(str[i]);
		if (r == -1)
			return (-1);
		n += r;
		i++;
	}
	return (n);
}
