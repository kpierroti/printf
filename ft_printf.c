#include "ft_printf.h"

static int	ft_typeprint(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (c == 'c')
		len = ft_putchar((char)va_arg(args, int));
	else if (c == 'u')
		len = ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'p')
		len = ft_putpointer(va_arg(args, void *));
	else if (c == 'x')
		len = ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		len = ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
	{
		ft_putchar('%');
		len = 1;
	}
	else
		return (0);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_typeprint(format[i], args);
		}
		else
		{
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	void	*ptr;

	// Testando a impressão de um número inteiro
	ft_printf("Imprimindo um número inteiro (d): %d\n", -12345);
	ft_printf("Imprimindo um número inteiro positivo (i): %i\n", 6789);
	// Testando a impressão de uma string
	ft_printf("Imprimindo uma string: %s\n", "Olá, mundo!");
	ft_printf("Imprimindo string NULL: %s\n", NULL);
	// Testando a impressão de um caractere
	ft_printf("Imprimindo um caractere (c): %c\n", 'A');
	// Testando a impressão de um número unsigned
	ft_printf("Imprimindo um número unsigned (u): %u\n", 123456789);
	// Testando a impressão de um ponteiro (p)
	ptr = &main;
	ft_printf("Imprimindo um ponteiro (p): %p\n", ptr);
	// Testando a impressão de um número hexadecimal (x e X)
	ft_printf("Imprimindo número hexadecimal (x): %x\n", 255);
	ft_printf("Imprimindo número hexadecimal (X): %X\n", 255);
	// Testando a impressão de % (percent sign)
	ft_printf("Imprimindo o caractere de porcentagem (%%): %%\n");
	return (0);
}
*/
