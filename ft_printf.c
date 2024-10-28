/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_printf.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:10:53 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/28 12:01:50 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

int	ft_print_char(char character)
{
	ft_putchar_fd(character, STDOUT);
	return (sizeof(char));
}

int	ft_print_string(char *string)
{
	ft_putstr_fd(string, STDOUT);
	return (ft_strlen(string));
}

int	ft_print_specifier(char const *format, va_list arguments)
{
	if (ft_strncmp("%c", format, 2) == 0)
		return (ft_print_char(va_arg(arguments, int)) + 1);
	else if (ft_strncmp("%s", format, 2) == 0)
		return (ft_print_string(va_arg(arguments, char *)));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	arguments;
	int		bytes_printed;

	va_start(arguments, format);
	bytes_printed = 0;
	while (*format)
	{
		if (*format == '%')
			format += ft_print_specifier(format, arguments);
		else
		{
			format += ft_print_char(*format);
		}
	}
	return (bytes_printed);
}

int	main(void)
{
	ft_printf("Hello world! %c %s\n", 'A', "HELLO WORLD!");
}
