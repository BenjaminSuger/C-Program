#include <unistd.h>

// test ; " seulement          la c'est      plus dur "
// devient ; "seulement la c'est plus dur"


int	main(int argc, char **argv)
{
	int		i;
	int		end;
	char	*str;

	i = 0;
	end = 0;
	str = argv[1];
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	//just trim the end space if exist
	while (str[end])
		end++;
	while(str[end -1] == ' ')
		end -=2;
	if (str[i] == ' ')
		i++;
	while (i <= end)
	{
		if (str[i] == ' ')
		{
			if(str[i - 1] != ' ')
				write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
