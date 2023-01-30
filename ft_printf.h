/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:15:26 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/31 05:23:28 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>

# define SHARP 0
# define SPACE 1
# define PLUS 2

int	ft_printf(const char *str, ...);
int	print_c(char c, bool *options);
int	print_s(char *s, bool *options);
int	print_d(int n, bool *options);
int	print_u(unsigned int n, bool *options);
int	print_x(unsigned long n, bool ucase, bool pointer, bool *options);
int	print_per(void);

#endif
