#include <unistd.h>
#include <stdio.h>

int	check(char c, char *chaine, int n)
{
	int	i;

	i = 0;
	while (i < n && chaine[i])
	{
		if (chaine[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_in(char c, char *chaine)
{
	int	i;

	i = 0;
	while (chaine[i])
	{
		if (chaine[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;
	char	*src;

	i = 0;
	str = argv[2];
	src = argv[1];
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (src[i])
	{
		if (check(src[i], src, i) == 0 && is_in(src[i], str) == 1)
		{
			write(1, &src[i], 1);
		}
		i++;
	}
}
