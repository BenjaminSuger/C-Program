#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	recursion(char *str, int index, int n)
{
	if (index == n)
	{
		printf("%s\n", str);
		return (0);
	}
	else
	{
		for (int i = index; i <= n; i++)
		{
			swap(&str[index], &str[i]);
			recursion(str, index + 1, n);
			swap(&str[index], &str[i]);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	recursion(argv[1], 0, strlen(argv[1]) - 1);
}
