#include <unistd.h>
#include <stdio.h>

char	*stringrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j < i - 1)
	{
		temp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = temp;
		i--;
		j++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "chatss";
	printf("%s\n", stringrev(str));
}
