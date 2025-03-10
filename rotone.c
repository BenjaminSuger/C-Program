#include <unistd.h>

void	imprime(char c)
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
	{
		write(1, "\n", 1);
		return (0);
	}
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y')
			|| (str[i] >= 'A' && str[i] <= 'Y'))
			imprime(str[i] + 1);
		else if (str[i] == 'Z')
			imprime('A');
		else if (str[i] == 'z')
			imprime('a');
		else
			imprime(str[i]);
		i++;
	}
	write(1, "\n", 1);
}
