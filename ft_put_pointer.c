/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zahmamed <zahmamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:33:41 by zahmamed          #+#    #+#             */
/*   Updated: 2026/11/06 18:31:31 by zahmamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(void *p)
{
	int	rt;
	int	rcp;

	rt = 0;
	if (!p)
	{
		rt = ft_putstr("(nil)");
	}
	else
	{
		rcp = ft_putstr("0x");
		if (rcp == -1)
			return (-1);
		else
		{
			rt += rcp;
		}
		rcp = ft_put_adp((unsigned long)p);
		if (rcp == -1)
		{
			return (-1);
		}
		rt += rcp;
	}
	return (rt);
}
