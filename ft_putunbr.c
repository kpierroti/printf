#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	char		c;
	long int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_putunbr(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	return (len + 1);
}
