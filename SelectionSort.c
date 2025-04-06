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

int	selection_sort(int *array, size_t length)
{
	size_t j, i = 0;
	int temp, steps, min;

	while (i < length)
	{
		min = i;
		j = i + 1;
		while (j < length)
		{
			if (array[min] > array[j])
				min = j;
			j++;
		}
		if (array[min] < array[i])
		{
			steps++;
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
		print_array(array, length);
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


	//SelectionSort
	
	printf("========================================\n");
	int steps = selection_sort(array, length);
	printf("il y a eu %d swaps\n", steps);
	printf("========================================\n");


	//last check 
	for (size_t i = 0; i < length; i++)
		printf("%d ", array[i]);
	printf("\n");

}
