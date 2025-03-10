#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	search;
	char	replace;
	char	*str;

	i = 0;
	str = argv[1];
	search = argv[2][0];
	replace = argv[3][0];
	if (argc != 4)
		write(1, "\n", 1);
	else
	{
		while (str[i])
		{
			if (str[i] == search)
				write(1, &replace, 1);
			else
				write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
