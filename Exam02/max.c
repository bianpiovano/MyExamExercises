#include <unistd.h>

int max(int *tab, unsigned int len)
{ 
	if (len == 0)
		return 0;
	int num;
	num = tab[0];
	unsigned int i;
	i = 0;
	while (i < len)
	{
		if (num < tab[i])
			num = tab[i];
		i++;
	}
	return num;
}