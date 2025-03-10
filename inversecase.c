#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				ft_putchar(str[i] - 32);
			else if (str[i] >= 'A' && str[i] <= 'Z')
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
			i++;
		}
	}
}
