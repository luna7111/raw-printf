/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_printf.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:10:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 01:19:06 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *format, ...)
{
	va_list	arguments;
	int		bytes_printed;

	va_start(arguments, format);
	bytes_printed = 0;
	while (*format)
	{
		if (*format == '%')
			print_specifier
		else
			ft_print
	}
	return (bytes_printed);
}

int	main(void)
{
	printf("%Hello world! %% %d %ld\n\n", 42, (size_t)42);
	ft_printf("%Hello world! %% %d %ld\n\n", 42, (size_t)42);
}
