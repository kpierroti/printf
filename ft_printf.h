#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int			ft_strlen(const char *s);
int			ft_putnbr(int n);
int			ft_putunbr(unsigned int n);
int			ft_putstr(char *str);
int			ft_putchar(char c);
int			ft_putnbr_base(unsigned long long n, char *base);
int			ft_putpointer(void *ptr);
int			ft_printf(const char *format, ...);

#endif