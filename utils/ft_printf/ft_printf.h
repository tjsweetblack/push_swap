/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belmiro <belmiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 20:49:22 by badriano          #+#    #+#             */
/*   Updated: 2024/08/12 14:33:10 by belmiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);

char	*ft_itoa(int n);

void	ft_putchar(const char c);
void	ft_putstr(const char *s);
void	ft_print_unsigned(unsigned int n, int *len);
void	ft_print_point(unsigned long long p, int *len);
void	ft_print_hex(unsigned int n, const char c, int *len);
void	ft_print_hexux(unsigned long long n, int *len);

#endif
