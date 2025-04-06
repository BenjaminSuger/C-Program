#include <stdio.h>

int	Produit2Vecteur(int array1[], int *array2, int length)
{
	int	i;
	int	result;

	i = 0;
	//int test = sizeof(array1);
	//int test2 = sizeof(array1[0]);
	//int length = sizeof(array1) / sizeof(array1[0]);
	while (i < length)
	{
		result += (array1[i] * array2[i]);
		i++;
	}
	return (result);
}


int	main(void)
{
	int	result;
	int	array1[3] = {3,2,-4};
	int	array2[3] = {2,-3,5};
	//int size = (int) sizeof(array1) / sizeof(array1[0]);
	result = Produit2Vecteur(array1, array2, (int) sizeof(array1) / sizeof(array1[0]));
	printf("%d\n", result);
}
