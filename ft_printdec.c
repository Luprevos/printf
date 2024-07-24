/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:42:09 by luprevos          #+#    #+#             */
/*   Updated: 2024/07/24 14:09:40 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_numlen(int num)
{
	int		len;
	long	n;

	len = 0;
	n = num;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	long	nb;

	nb = n;
	len = ft_numlen(n);
	num = (char *)malloc(sizeof(char) * (len +1));
	if (!num)
		return (0);
	num[len] = '\0';
	if (nb == 0)
		num[0] = '0';
	else if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		num[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (num);
}

int	ft_printdec(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	if (num)
	{
		len = ft_printstr(num);
		free (num);
	}
	return (len);
}
