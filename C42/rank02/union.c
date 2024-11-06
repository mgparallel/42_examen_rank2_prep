#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	char	seen[256] = {0};
	
	while (*s1)
	{
		if (!seen[(unsigned char)*s1])
		{
			write (1, s1, 1);
			seen[(unsigned char)*s1] = 1;
		}
		s1++;
	}
	while (*s2)
	{
		if (!seen[(unsigned char)*s2])
		{
			write (1, s2, 1);
			seen[(unsigned char)*s2] = 1;
		}
		s2++;
	}
	write (1, "\n", 1);
}

int	main(int ac, char **ag)
{
	if (ac != 3)
	{
		write (1, "\n", 1);
		return (1);
	}
	ft_union(ag[1], ag[2]);
	return (0);
}
