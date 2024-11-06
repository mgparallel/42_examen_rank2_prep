#include <unistd.h>
/*
char	*ft_strrchr(char *s, char ch)
{
	char *str = s;
	char *ptr;
	while (*str)
	{
		if (*str == ch)
			*ptr = *str;
		str++;
	}
	if (ch == '\0')
		*ptr = *str;
	return (ptr);
}*/

void	last_word(char *str)
{
	int	i = 0;
	char	*pos = NULL;

	while (str[i])
	{
		if (str[i] != ' ')
			i++;
		else
		{
			*pos = *str + i;
			i++;
		}
	}
	write (1, pos + 1, len - );
	write (1, "\n", 1);
}

int	main(int ac, char **ag)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	last_word(ag[1]);
	return (0);
}
