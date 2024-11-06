unsigned char	swap_bits(unsigned char octet)
{
	return ((octet & 0x0F) << 4 | (octet >> 4));
}

#include <stdio.h>

int	main(void)
{
	return (printf("0x%02X", swap_bits(0xA5))); //165
}
