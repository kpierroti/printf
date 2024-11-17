#include "ft_printf.h"

int	ft_putpointer(void *ptr)
{
	long long	addr;
	char		*base;
	int			len;

	base = "0123456789abcdef";
	len = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		addr = (unsigned long long)ptr;
		write(1, "0x", 2);
		len = ft_putnbr_base(addr, base);
	}
	return (len + 2);
}
