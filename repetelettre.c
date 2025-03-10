#include <unistd.h>

//repete les lettres de l'input user par la position dans l'alphabet
//maj et min 
//abcD devient abbccDDDD
//attention piege maj enonce

void	imprime(char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	str = argv[1];
	if (argc != 2)
		imprime('\n', 1);
	else
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				imprime(str[i], str[i] - 96);
			else if (str[i] >= 'A' && str[i] <= 'Z')
				imprime(str[i], str[i] - 64);
			else
				imprime(str[i], 1);
			i++;
		}
		imprime('\n', 1);
	}
	return (0);
}
