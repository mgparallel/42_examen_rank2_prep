#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char temp;
	int i = 8;

	while (i--)
	{
		temp = (octet >> i & 1) + '0';
		write (1, &temp, 1);
	}
}

int	main(void)
{
	print_bits(2);
	return 0;
}
