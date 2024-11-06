unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	unsigned char res;

	i = 0;
	res = 0;
	while (i < 8)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i++;
	}
	return (res);
}

#include <stdio.h>
int	main(void)
{
	printf("0x%02X", reverse_bits(0xA1));
}
