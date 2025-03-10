#include <unistd.h>

void	imprime(char c)
{
	write(1, &c, 1);
}

void	mirror(char c)
{
	int		i;
	char	*lowercase;
	char	*uppercase;
	char	*Mlowercase;
	char	*Muppercase;

	i = 0;
	lowercase = "abcdefghijklmnopqrstuvwxyz";
	uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	Mlowercase = "zyxwvutsrqponmlkjihgfedcba";
	Muppercase = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	if (c >= 'A' && c <= 'Z')
	{
		while( uppercase[i] != c)
			i++;
		imprime(Muppercase[i]);
	}
	else
	{
		while (lowercase[i] != c)
			i++;
		imprime(Mlowercase[i]);
	}
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
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
			mirror(str[i]);
		else
			imprime(str[i]);
		i++;
	}
	write(1, "\n", 1);
}
