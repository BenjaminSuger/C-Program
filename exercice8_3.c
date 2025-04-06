#include <unistd.h>
#include <stdio.h>

//little variation about the 'reverse', here I reverse word

int	main(int argc, char *argv[])
{
	int	i, j;
	int	count_letter_e;
	char	*sentence;

	if (argc != 2)
	{
		printf("Use: ./program <one_sentence>");
		return (1);
	}
	i = 0;
	count_letter_e = 0;
	sentence = argv[1];
	while (sentence[i])
	{
		if(sentence[i] == 'e' || sentence[i] == 'E')
			count_letter_e++;
		write(1, &sentence[i], 1);
		i++;
	}
	printf("\nil y a %d fois la lettre e\n", count_letter_e);
	i = 0;
	while (sentence[i])
	{
		if (sentence[i] == ' ')
		{
			j = i - 1;
			while ( j >= 0 && sentence[j] != ' ')
			{
				write(1,&sentence[j],1);
				j--;
			}
			write(1, &sentence[i], 1);
		}
		i++;
	}
	j = i - 1;
	while(j >= 0 && sentence[j] != ' ')
	{
		write(1, &sentence[j], 1);
		j--;
	}
	write(1, "\n", 1);
}
