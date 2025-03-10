#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_hex(int nb)
{
	if (nb >= 0 && nb <=  9)
		ft_putchar('0' + (nb % 16));
	if (nb >= 10 && nb <= 15)
		ft_putchar('a' + (nb % 16) % 10);
	if (nb > 15)
	{
		int_to_hex(nb / 16);
		int_to_hex(nb % 16);
	}
}

int	main(void)
{
	//11 => 0xa
	//124 => 0x7c
	//6789 => 0x1a85
	int nb = 6789;
	int_to_hex(nb);
}
