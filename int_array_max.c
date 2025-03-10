#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int		temp;

	i = 0;
	temp = tab[0];
	if (!tab)
		return (0);
	while (i < len)
	{
		if (tab[i] > temp)
			temp = tab[i];
		i++;
	}
	return (temp);
}

int	main(void)
{
	int	tab[] = {12, 34, 0, 100, 567, 666};
	int	tab2[] = {-78, -9, -9, -10};
	int	tab3[7];
	printf("%d\n", max(tab, 6));
	printf("%d\n", max(tab2, 4));
	printf("%d\n", max(tab3, 7));
}
