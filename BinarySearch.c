#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	//remplissage d'un tableau sorted
	int	tableau[100];
	for (int i = 0; i < 100; i++)
		tableau[i] = i;

	//quelques securite
	if (argc != 2)
	{
		printf("Use: <program> <number>\n");
		return (1);
	}
	int element = atoi(argv[1]); // l'element qu'on cherche
	if (element < 0 || element >= 100)
	{
		printf("Value should be between 0 and 99i\nValues are hardcoded for this example\n");
		return (1);
	}

	//maintenant la recherche
	int begin = 0;
	int end = 99;
	int middle;
	int steps = 0; //steps just for demonstration
	while (begin <= end)
	{
		middle = (begin + end) / 2;
		if (tableau[middle] == element)
		{
			steps++;
			printf("Element trouve a l'index %d en %d steps vs %d steps en linear search\n", middle, steps, middle);
			return (0);
		}
		else if (element > tableau[middle])
		{
			steps++;
			begin = middle + 1;
		}
		else if (element < tableau[middle])
		{
			steps++;
			end = middle - 1;
		}
	}
	printf("element non trouve");
	return (0);
}
