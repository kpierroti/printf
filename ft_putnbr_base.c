#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long n, char *base)
{
	int	len;
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (0);
	len = 0;
	if (n >= base_len)
	{
		len += ft_putnbr_base(n / base_len, base);
	}
	write(1, &base[n % base_len], 1);
	len++;
	return (len);
}
