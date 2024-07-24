/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luprevos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:09:36 by luprevos          #+#    #+#             */
/*   Updated: 2024/07/24 14:41:55 by luprevos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_putchar_fd(char c, int fd);
int		ft_printchar(int c);
int		ft_printstr(char *c);
int		ft_printhex(unsigned int num, const char format);
void	ft_putchar(char c);
int		ft_printdec(int n);
int		ft_printpercent(void);
int		ft_printptr(unsigned long long ptr);
int		ft_printunsigned(unsigned int num);
int		ft_printf(const char *str, ...);
#endif
