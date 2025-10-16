#include <unistd.h>
#include <stdio.h>

int	max_to_remove(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if(str[i] == '(')
			count++;
		else if (str[i] == ')')
			count--;
		i++;
	}
	if (count >= 0)
		return (count);
	else
		return (count * -1);
}

int	equilibre(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = -1;
	while (str[i] && str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	if (str[i] && str[i] == ')')
		return (1);
	while (str[i])
	{
		if (str[i] == '(')
			count++;
		else if (str[i] == ')')
			count--;
		i++;
		if (count == -2)
			return (1);
	}
	if (count == -1)
		return (0);
	else
		return (1);
}

int	recursion(char *str, int index, int remove, int max_removed)
{
	char	current_char;
	int	current_index;
	//base case
	if (str[index] == '\0')
	{
		if (remove <= max_removed)
		{
			if (equilibre(str) == 0)
				printf("%s\n", str);
		}
		return (0);
	}
	else
	{
		current_index = index;
		current_char = str[current_index];
		index++;
		//ajout
		str[current_index] = ' ';
		remove++;
		recursion(str, index, remove, max_removed);
		//pas d'ajout
		str[current_index] = current_char;
		remove--;
		recursion(str, index, remove, max_removed);
	}

	




	return (0);
}


int	main(int argc, char **argv)
{
	int	index;
	int	remove;
	int	max_removed;

	index = 0;
	remove = 0;
	if (argc != 2)
		return (1);
	//la je vais calculer le max_removed
	//potentiellement si je trouve rien c'est ici que je print et je sors
	max_removed = max_to_remove(argv[1]);
	if (max_removed == 0)
	{
		printf("%s\n", argv[1]);
		return (0);
	}
	recursion(argv[1], index, remove, max_removed);

	return (0);
}
