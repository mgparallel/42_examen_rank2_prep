int	max(int *tab, unsigned int len)
{
	unsigned int	i = 0;
	int	bigger;

	if (len == 0)
		retrun (0);
	if (!tab)
		return (0);
	bigger = tab[0];
	while (i++ < len)
	{
		if (tab[i] > bigger)
			bigger = tab[i];
	}
	return (bigger);
}

#include <stdio.h>
int	main(void)
{
	int array[] = {1, 2, 4, 1, 7};
	int re = max(array, 5);
	printf("%d", re);
}
