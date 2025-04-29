#include <unistd.h>

void	print_bits(unsigned char octect)
{
	int i = 7;
	char bit;

	while (i >= 0)
	{
		bit = (octect & (1 << i)) ? '1' : '0';
		write(1, &bit, 1);
		i--;
	}
}
