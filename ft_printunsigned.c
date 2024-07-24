/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:27:14 by luprevos          #+#    #+#             */
/*   Updated: 2024/07/24 14:43:31 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignedlen(unsigned int n)
{
	if (n >= 1000000000)
		return (10);
	else if (n >= 100000000)
		return (9);
	else if (n >= 10000000)
		return (8);
	else if (n >= 1000000)
		return (7);
	else if (n >= 100000)
		return (6);
	else if (n >= 10000)
		return (5);
	else if (n >= 1000)
		return (4);
	else if (n >= 100)
		return (3);
	else if (n >= 10)
		return (2);
	else
		return (1);
}

void	ft_printrec(unsigned int num)
{
	if (num >= 10)
	{
		ft_printrec(num / 10);
	}
	ft_putchar(num % 10 + '0');
}

int	ft_printunsigned(unsigned int num)
{
	ft_printrec(num);
	return (ft_unsignedlen(num));
}
