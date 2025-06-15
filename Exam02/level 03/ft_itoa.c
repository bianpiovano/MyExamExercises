#include <unistd.h>
#include <stdlib.h>

int int_len(long nbr)
{
	int count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while(nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return count;
}

char *ft_itoa(int nbr)
{
	int len;
	int i;
	char *result;
	long n = nbr;
	len = int_len(n);

	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return NULL;

	result[0] = '0';
	result[len] = '\0';

	if (n < 0)
		n = -n;

	i = len - 1;
	while(n != 0)
	{
		result[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}

	if (nbr < 0)
		result[0] = '-';

	return result;
}
