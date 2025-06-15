#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void pgcd(unsigned int n1, unsigned int n2)
{
	while (n2 != 0)
	{	
		unsigned int temp;
		temp = n1 % n2;
		n1 = n2;
		n2 = temp;
	}
	printf("%u\n", n1);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	else
		write(1, "\n", 1);
	return 0;
}
