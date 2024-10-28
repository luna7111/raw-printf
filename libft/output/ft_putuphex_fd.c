/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_putuphex_fd.c                               .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.c     |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/28 17:00:39 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/28 20:21:31 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putuphex_fd(long unsigned int n, int fd)
{
	int	printed_bytes;

	printed_bytes = 0;
	if (n >= 16)
		printed_bytes += ft_puthex_fd(n / 16, fd);
	n = n % 16;
	if (n < 10)
		printed_bytes += ft_putchar_fd(n + '0', fd);
	else
		printed_bytes += ft_putchar_fd(n + '7', fd);
	return (printed_bytes);
}
