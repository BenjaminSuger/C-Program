#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int array1[] = {2,4,5,6,10};
	int array2[] = {1,3,5,7,8,9};

	//length
	size_t LengthArray1 = sizeof(array1) / sizeof(array1[0]);
	size_t LengthArray2 = sizeof(array2) / sizeof(array2[0]);
	size_t total = LengthArray1 + LengthArray2;

	int *result = malloc(sizeof(int) * total);
	if (result == NULL)
		return (0);

	//maintenant on va traverser et mettre au fur et a messure
	size_t A1 = 0;
	size_t A2 = 0;
	size_t R = 0;

	while (A1 < LengthArray1 && A2 < LengthArray2)
	{
		if (array1[A1] > array2[A2])
		{
			result[R] = array2[A2];
			A2++;
		}
		else if (array1[A1] < array2[A2])
		{
			result[R] = array1[A1];
			A1++;
		}
		else if (array1[A1] == array2[A2])
		{
			result[R] = array1[A1];
			A1++;
		}
		R++;
	}
	//dans le cas ou on a finit une liste mais pas l'autre
	
	while (A1 < LengthArray1)
	{
		result[R] = array1[A1];
		R++;
		A1++;
	}
	while (A2 < LengthArray2)
	{
		result[R] = array2[A2];
		R++;
		A2++;
	}

	//print les tableaux et le result
	printf("Premier Tableau \n");
	for (int j = 0; j < (int) LengthArray1; j++)
		printf("%d ", array1[j]);
	printf("\nSecond Tableau\n");
	for (int k = 0; k < (int) LengthArray2; k++)
		printf("%d ", array2[k]);
	printf("\nFusion des 2 tableaux\n");
	for (int i = 0; i < (int) total; i++)
		printf("%d ", result[i]);
	puts("\n");

	free(result);
	return (0);
}
