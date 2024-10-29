/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   libftprintf.h                                  .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 17:01:10 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/29 00:13:06 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//variadic arguments
# include <stdarg.h>
//write
# include <unistd.h>
//printf
# include <stdio.h>
//libft
# include "libft/libft.h"

int	ft_print_specifier(char const *format, va_list arguments);
int	ft_printf(char const *format, ...);

#endif
