/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtacunan <mtacunan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:53:32 by mtacunan          #+#    #+#             */
/*   Updated: 2021/11/17 12:55:06 by mtacunan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_putnbr_u(unsigned int n);
int	ft_put_address(unsigned long n, char *base);
int	ft_hex_caps(unsigned int n, char *hex_base);
int	ft_hex_min(unsigned int n, char *hex_base);
int	ft_printf(const char *str, ...);
#endif