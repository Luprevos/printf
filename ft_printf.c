/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:46:48 by luprevos          #+#    #+#             */
/*   Updated: 2024/07/24 14:28:23 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list *args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(*args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(*args, char *));
	else if (format == 'p')
		len += ft_printptr(va_arg(*args, unsigned long long));
	else if (format == 'd')
		len += ft_printdec(va_arg(*args, int));
	else if (format == 'i')
		len += ft_printdec(va_arg(*args, int));
	else if (format == 'u')
		len += ft_printunsigned(va_arg(*args, unsigned int));
	else if (format == 'x')
		len += ft_printhex(va_arg(*args, unsigned int), format);
	else if (format == 'X')
		len += ft_printhex(va_arg(*args, unsigned int), format);
	else if (format == '%')
		len += ft_printpercent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_format(&args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/*int	main(void)
{
	ft_printf("%i\n", 0);
	printf("%i\n", 0);
}*/
