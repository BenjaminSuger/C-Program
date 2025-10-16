#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_global
{
	int	i;
	int	len;
	char	*target;
	char	**tab;
	int	value;
	int	*print;
}	t_global;

int	len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);

}

void	print_solution(t_global *global)
{
	for (int i = 0; i < global -> len; i++)
	{
		if (global ->print[i] == 1)
			printf("%s", global ->tab[i]);
	}
	printf("\n");
}

int	recursion(t_global *global)
{
	int	current_index;
	int	current_val;

	if (global -> i == global -> len)
	{
		if (global -> value == atoi(global -> target))
			print_solution(global);
		return (0);
	}
	else
	{
		current_index = global -> i;
		global -> i++;//quoi qu'il arrive on avance
		current_val = atoi(global -> tab[current_index]);
		
		//ajout 
		global -> print[current_index] = 1;
		global -> value += current_val;
		recursion(global);
		
		//on ajoute pas
		global -> value -= current_val;
		global -> print[current_index] = 0; 	
		recursion(global);
	
		global -> i--;//important
	}
	return (0);
}


int	main(int argc, char **argv)
{
	t_global	global;
	
	if (argc < 3)
	{
		printf("not enough arguments\n");
		return (1);
	}
	global.i = 0;
	global.value = 0;
	global.target = argv[1];
	global.tab = &argv[2];
	global.len = len(global.tab);
	global.print = calloc(sizeof(int), len(global.tab));

	recursion(&global);

	free(global.print);
	return (0);
}
