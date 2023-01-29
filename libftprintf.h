/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 04:15:26 by sshimizu          #+#    #+#             */
/*   Updated: 2023/01/30 02:50:27 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdbool.h>

# define PREFIX 0
# define SPACE 1
# define SIGN 2

int	print_c(char c, bool *options);
int	print_s(char *s, bool *options);
int	print_d(int n, bool *options);
int	print_u(unsigned int n, bool *options);
int	print_x(long n, bool ucase, bool *options);
int	print_per(void);

#endif
