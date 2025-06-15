#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
	int first = 1;	
	while (n % 2 == 0)
	{
		if (first == 0)
			printf("*");
		printf("2");
		n = n / 2;
		first = 0;
	}
	int i = 3;
	while (i * i <= n)
	{
		while (n % i == 0)
		{
			if (first == 0)
				printf("*");
			printf("%d", i);
			n = n / i;
			first = 0;
		}
		i = i + 2;
	}
	if (n > 1)
	{
		if (first == 0)
			printf("*");
		printf("%d", n);
	}
}
int main(int argc, char *argv[])
{

	if (argc == 2)
	{
		int n = atoi(argv[1]);
		if (n > 0)
			fprime(n);
	}
	printf("\n");
	return 0;
}
