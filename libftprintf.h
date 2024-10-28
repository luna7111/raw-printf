/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   libftprintf.h                                  .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 17:01:10 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/28 11:27:07 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#define	STDOUT 1

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
//write
# include <unistd.h>
//printf
# include <stdio.h>
int	ft_printf(char const *format, ...);
# include "libft/libft.h"
#endif
