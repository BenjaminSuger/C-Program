#include <stdio.h>
#include <unistd.h>

void	print_array(int *array, size_t length)
{
	size_t i = 0;
	while (i < length)
	{
		printf("%d ", array[i]);
		fflush(stdout);
		sleep(1);
		i++;
	}
	printf("\n");
}

int	bubble_sort(int *array, size_t length)
{
	size_t i = 0;
	size_t j;
	int temp;
	int steps = 0;

	while (i < length)
	{
		j = 1;
		while (j < length)
		{
			if (array[j - 1] < array[j])
			{
				steps++;
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				print_array(array, length);
			}
			j++;
		}
		i++;
	}
	return (steps);
}

int	main(void)
{ 
	int array[] = {23, 45, 5, -4, 1234, 56, -345, 0, 87, -665};

	//need to know the length of the array
	size_t length = sizeof(array) / sizeof(array[0]);
	printf("====================================\n");
	printf("the length of the array\n");
	printf("====================================\n");
	printf("%lu elements\n\n", length);
	
	sleep(1);

	//print the content of the array
	printf("========================================\n");
	printf("the content of the array at the start\n");
	printf("========================================\n");
	sleep(1);
	print_array(array, length);


	//BubbleSort
	
	printf("========================================\n");
	int steps = bubble_sort(array, length);
	printf("Pour la resolution il y a eu %d swaps\n", steps);
	printf("========================================\n");



	//last check 
	printf("========================================\n");
	printf("Resultat final :\n");
	for (size_t i = 0; i < length; i++)
		printf("%d ", array[i]);
	printf("\n");
	printf("========================================\n");

}
