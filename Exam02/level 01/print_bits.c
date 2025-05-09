#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = ((octet >> i) & i) + '0';
		write(1, &bit, 1);
	}
}
