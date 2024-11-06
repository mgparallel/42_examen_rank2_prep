#include <stdlib.h>
#include <unistd.h>
int	to_upper(int ch)
{
	return (ch - 32);
}

void	snake_to_camel(char *str)
{
	char *s;
	char *temp;
	int len = 0;
	int i = 0;

	s = str;
	while (s[i])
	{
		if (s[i] != '_')
			len++;
		i++;
	}
	temp = (char *)malloc(len);
	if (!temp)
		return ;
	i = 0;
	while(*s)
	{
		if (i == 0)
		{
			temp[i] = *s;
			i++;
		}
		s++;
		if ((*s) != '_')
			temp[i] = *s;
		else
		{
			s++;
			temp[i] = to_upper(*s);
		}
		i++;
	}
	write (1, temp, len);
	write (1, "\n", 1);
	free(temp);
}

int	main(int ac, char **ag)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	snake_to_camel(ag[1]);
	return (0);
}
